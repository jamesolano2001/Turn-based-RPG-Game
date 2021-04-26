#include <iostream>
#include <string>
#include "titlescreen.h"
#include "beginning.h"
#include "player.h"
#include "acidville.h"
#include "alkacity.h"
#include "metalmetropolis.h"
#include "chemistria.h"
#include "clearscreen.h"

using namespace std;


void randomgenerate()
{
	const int AMOUNT = 3;


	int townpath[AMOUNT];

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
			if (n == townpath[j])
			{
				unique = false;
				break;
			}
		} while (!unique);
		townpath[i]=n;
	}
	for ( int i = 0; i < AMOUNT; i++){
		player.order.push_back(townpath[i]);
	}

}


void townpath()
{
	int i = 0;
	while (i < 3){
		i = player.stage;
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
}
int main()
{
	int i = 0;
	struct Player player;
	randomgenerate();
    titlescreen();
	townpath();
	clearscreen();
	chemistria();
	cout<<"The End";


}
