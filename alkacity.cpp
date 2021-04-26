#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "alkacity.h"
#include "clearscreen.h"
#include "alkaline.h"
#include "save.h"
#include "player.h"
using namespace std;


void ac_town()
{
	cout<<"                  \\  |  /         ___________			"<<endl;
	cout<<"   ____________  \\ \\_# /         |  ___      |       _________	"<<endl;
	cout<<"  |            |  \\  #/          | |   |     |      | = = = = |	"<<endl;
	cout<<"  | |   |   |  |   \\\\#           | |`v'|     |      |         |	"<<endl;
	cout<<"  |            |    \\#  //       |  --- ___  |      | |  || | |	"<<endl;
	cout<<"  | |   |   |  |     #_//        |     |   | |      |         |	"<<endl;
	cout<<"  |            |  \\\\ #_/_______  |     |   | |      | |  || | |	"<<endl;
	cout<<"  | |   |   |  |   \\\\# /_____/ \\ |      ---  |      |         |	"<<endl;
	cout<<"  |            |    \\# |+ ++|  | |  |~~~~~~| |      | |  || | |	"<<endl;
	cout<<"  |            |    \\# |+ ++|  | |  |~~~~~~| |      | |  || | |	"<<endl;
	cout<<"~~|    (~~~~~) |~~~~~#~| H  |_ |~|  | |||| | |~~~~~~|         |	"<<endl;
	cout<<"  |    ( ||| ) |     # ~~~~~~    |  | |||| | |      | ||||||| |	"<<endl;
	cout<<"  ~~~~~~~~~~~~~________/  /_____ |  | |||| | |      | ||||||| |	"<<endl;
	cout<<"                                 ~~~~~~~~~~~~~      | ||||||| |	"<<endl;
}

void ac_menu()
{
	ac_town();
	cout<<"Welcome to Alka City"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"1. Venture forth into thee sewers"<<endl;
	cout<<"2. Rest"<<endl;
	cout<<"3. Save"<<endl;
}
bool accheckInput(string option)
{
	for (int i = 0; i < option.length();i++){
		if (!isdigit(option[i]))
			return false;
	}
	return true;
}
void alkacity()
{
	string option;
	bool rest = true;
	while (true){
		ac_menu();
		cin >> option;
		while (!accheckInput(option)){
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
				player.health = (player.maxHealth/2);
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
	if (option =="1")
		alkaline_battle();
	else if(option == "3")
		save();

}
