#include <iostream>
#include <string>
#include "titlescreen.h"
#include "player.h"
#include "acidville.h"
#include "alkacity.h"
#include "metalmetropolis.h"
#include "chemistria.h"
#include "clearscreen.h"
#include "ending.h"

using namespace std;

// Allocates the numbers 0,1,2 to a member array randomly
void randomgenerate()
{
	const int AMOUNT = 3;


	int townpath[AMOUNT];
	int *ptr;				//we used a pointer to allocate the random integers to the array.
	ptr = townpath;

	srand(time(NULL));

	for (int i=0;i<AMOUNT;i++)
	{
		bool unique;
		int n;
		do
		{

		n=rand()%AMOUNT;
		unique=true;
		for (int j=0;j<i;j++)
			if (n == ptr[j])
			{
				unique = false;
				break;
			}
		} while (!unique);
		ptr[i]=n;
	}
	for ( int i = 0; i < AMOUNT; i++){
		player.order.push_back(ptr[i]);
	}

}

//This checks which town should the player should go first and then directs them to the hub
void townpath()
{
	int i = 0;	//i is the stage number
	
	while (i < 3){
		player.stage = i;
		switch (player.order[i]+1){
			case 1:

				acidville();
				break;
			case 2:

				alkacity();
				break;
			case 3:

				metalmetropolis();
				break;
		}
		clearscreen();
		i++;
	}
	if (player.stage==3){
		chemistria();
		i+=1;
	}
}
int main()
{
	player.set_health(100);
	randomgenerate();
	clearscreen();
    	titlescreen();
	townpath();
	chemistria();
	clearscreen();
	ending();


}
