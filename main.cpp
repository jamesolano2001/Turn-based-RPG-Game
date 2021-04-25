#include <iostream>
#include <string>
#include "titlescreen.h"
#include "beginning.h"
#include "player.h"
#include "acidville.h"

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
		player.order[i] = townpath[i];
	}



}

int main()
{
	struct Player player;
	randomgenerate();
    titlescreen();
	beginning();
	acidville();

}
