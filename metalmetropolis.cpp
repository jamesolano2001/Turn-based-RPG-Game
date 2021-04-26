#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "metalmetropolis.h"
#include "clearscreen.h"
#include "metal.h"
#include "save.h"
using namespace std;


void mm_town()
{
	cout<<"                       .|						"<<endl;
	cout<<"                       | |						"<<endl;
	cout<<"                       |'|            ._____		"<<endl;
	cout<<"               ___    |  |            |.   |' .---'|	"<<endl;
	cout<<"       _    .-'   '-. |  |     .--'|  ||   | _|    |	"<<endl;
	cout<<"    .-'|  _.|  |    ||   '-__  |   |  |    ||      |	"<<endl;
	cout<<"    |' | |.    |    ||       | |   |  |    ||      |	"<<endl;
	cout<<" ___|  '-'     '    ""       '-'   '-.'    '`      |____	"<<endl;
}

void mm_menu()
{
	mm_town();
	cout<<"Welcome to Metal Metropolis"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"1. Venture forth into thee alleyways"<<endl;
	cout<<"2. Rest"<<endl;
	cout<<"3. Save"<<endl;
}
bool mmcheckInput(string option)
{
	for (int i = 0; i < option.length();i++){
		if (!isdigit(option[i]))
			return false;
	}
	return true;
}
void metalmetropolis()
{
	string option;
	bool rest = true;
	while (true){
		mm_menu();
		cin >> option;
		while (!mmcheckInput(option)){
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
				cin.ignore();
				clearscreen();
			}
			else{
				cout<<"Ouch! The bed bugs have infested the house! What an awful nap!"<<endl;
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
	if (option == "1")
		metal_battle();
	else if(option == "3")
		save();

}
