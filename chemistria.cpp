#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "player.h"
#include "clearscreen.h"
#include "chemistria.h"
#include "creator.h"
#include "save.h"

using namespace std;


void coc_town()
{
	cout<<"                   ___    /\\				"<<endl;
	cout<<"                  `---|  /%%\\/\\				"<<endl;
	cout<<"                     ,`./,--.\\%\\				"<<endl;
	cout<<"                    /%%%\\|  |--.\\			"<<endl;
	cout<<"                   /,---.|[]|  |				"<<endl;
	cout<<"                    |]_'||__| [|				"<<endl;
	cout<<"                    ||]|[|]|[| |				"<<endl;
	cout<<"               ._..-':\\._ ''/`-'.._.			"<<endl;
	cout<<"        ._._.  |  _.:''|-'`|-..__.:|  ._._.		"<<endl;
	cout<<"        '._,'_.''_    _|  _| .-. ``'._'._.'		"<<endl;
	cout<<"         | |_  ,'.\\  '-| '-| |_|   [] _| |		"<<endl;
	cout<<"    _____|]|-'|,++:_   ||] |_     _  '-|[|_________	"<<endl;
	cout<<"    ~  ,-|`|  |+++|-'  |  _|-'   '-'   |.|  ~      	"<<endl;
	cout<<"      ~) |_|__||  |    ; '-:         __|_|`-.___ ~	"<<endl;
	cout<<"    _  \\-._..''`--:.__/-'   \\__..--''    __...-,'__	"<<endl;
	cout<<"     `-,-'    _.-'-.   `---''   _____..')..-~~'|\\	"<<endl;
	cout<<"       `-._.-'`-._'`)         ,'`_..-~~' ~_____;'	"<<endl;
	cout<<"            `. ~~ `.`.________`.( ~~  ___)		"<<endl;
	cout<<"              )    ~`.\\ '  '    ,'  ~\\			"<<endl;
	cout<<"            ,'|  ~    ')__:__:_( ~   |)			"<<endl;
	cout<<"             `-...______________....-'			"<<endl;
}

void coc_menu()
{
	coc_town();
	cout<<"Welcome to the Castle of Chemistria"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"1. Face against the cause of the calamity"<<endl;
	cout<<"2. Rest"<<endl;
	cout<<"3. Save"<<endl;
}

bool coccheckInput(string option)
{
	for (int i = 0; i < option.length();i++){
		if (!isdigit(option[i]))
			return false;
	}
	return true;
}
void chemistria()
{
	string option;
	bool rest = true;
	player.stage = 4;
	while (true){
		coc_menu();
		cin >> option;
		while (!coccheckInput(option)){
			cout<<"Invalid input"<<endl;
			cin >> option;
		}
		int random = rand()%2;
		if ( option == "2" && rest == true ){
			cin.ignore();
			clearscreen();
			cout<<"Gulp.. Gulp... Gulp......"<<endl;
			cin.ignore();
			clearscreen();
			if ( random == 0){
				cout<<"Health is now full, that potion was delicious!"<<endl;
				player.health = player.maxHealth;
				cin.ignore();
				clearscreen();
			}
			else{
				cout<<"Bleh! The potion was expired!"<<endl;
				player.health = player.maxHealth/2;
				cin.ignore();
				clearscreen();
			}
			rest = false;
		}
		else if ( option == "2"){
			cin.ignore();
			clearscreen();
			cout<<"No more potions left!"<<endl;
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
		final_battle();
	else if (option =="3")
		save();

}
