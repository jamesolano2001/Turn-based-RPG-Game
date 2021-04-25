#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "acidville.h"
#include "player.h"
#include "clearscreen.h"
using namespace std;


void town()
{
    cout<<"  ~         ~~          __         "<<endl;
    cout<<"       _T      .,,.    ~--~ ^^      "<<endl;
    cout<<" ^^   // \\                    ~      "<<endl;
    cout<<"      ][O]    ^^      ,-~ ~          "<<endl;
    cout<<"   /''-I_I         _II____           "<<endl;
    cout<<"__/_  /   \\ ______/ ''   /'\\_,__     "<<endl;
    cout<<"  | II--'''' \\,--:--..,_/,.-{ },     "<<endl;
    cout<<"; '/__\\,.--';|   |[] .-.| O{ _ }     "<<endl;
    cout<<":' |  | []  -|   ''--:.;[,.'\\,/      "<<endl;
    cout<<"'  |[]|,.--'' '',   ''-,.    |       "<<endl;
    cout<<"  ..    ..-''    ;       ''. '       "<<endl;
}

void menu()
{
	town();
	cout<<"Welcome to Acid Ville"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"1. Venture forth into thee forest"<<endl;
	cout<<"2. Rest"<<endl;
	cout<<"3. Save"<<endl;
}

void acidville()
{
	int option = 0;
	srand(time(NULL));
	cout<<player.name<<endl;
	while ( option != 1  ){
		menu();
		int random = rand()%2;
		cin >> option;
		if ( option == 2 ){
			clearscreen();
			cout<<"zzzZZZ... zzzZZZZZzz... zzzZZZ....."<<endl;
			cin.ignore();
			clearscreen();
			if ( random == 0){
				cout<<"Health is now full, that was a good nap!"<<endl;
				cin.ignore();
			}
			else{
				cout<<"Ouch! The bed bugs have infested the house! What an awful nap!"<<endl;
				cin.ignore();
			}
			option = 0;
		}
	}




}
