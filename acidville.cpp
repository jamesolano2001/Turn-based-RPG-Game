#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "acidville.h"
#include "player.h"
#include "clearscreen.h"
#include "acid.h"
#include "save.h"
using namespace std;


void av_town()
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

void av_menu()
{
	av_town();
	cout<<"Welcome to Acid Ville"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"1. Venture forth into the forest"<<endl;
	cout<<"2. Rest"<<endl;
	cout<<"3. Save"<<endl;
}
bool avcheckInput(string option)
{
	for (int i = 0; i < option.length();i++){
		if (!isdigit(option[i]))
			return false;
	}
	return true;
}
void acidville()
{
	string option;
	bool rest = true;
	while (true){
		av_menu();
		cin >> option;
		while (!avcheckInput(option)){
			cout<<"Invalid input"<<endl;
			cin >> option;
		}
		int random = rand()%2;
		if ( option == "2" && rest == true ){
			cin.ignore();
			clearscreen();
			cout<<"zzzZZZ... zzzZZZZZzz... zzzZZZ....."<<endl;
			cin.ignore();
			clearscreen();
			if ( random == 0){
				cout<<"Health is now full, that was a good nap!"<<endl;
				player.health = player.maxHealth;
				cin.ignore();
				clearscreen();
			}
			else{
				cout<<"Ouch! The bed bugs have infested the house! What an awful nap!"<<endl;
				player.health = player.maxHealth/2;
				cin.ignore();
				clearscreen();
			}
			rest = false;
		}
		else if ( option == "2"){
			cin.ignore();
			clearscreen();
			cout<<"No more rests left!"<<endl;
			cin.ignore();
			clearscreen();
		}
		else if (option == "1" || option == "3"){
			break;
		}
		else{
			cin.ignore();
			clearscreen();
			cout<<"Read the instructions properly!"<<endl;
			cin.ignore();
			clearscreen();
		}
	}
	if (option == "1"){
		acid_battle();
		return;
	}
	if (option =="3")
		save();

}
