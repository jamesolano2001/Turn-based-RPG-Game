#include <iostream>
#include "acid.h"
#include "acidville.h"
#include "clearscreen.h"
#include "player.h"
using namespace std;

void acid_battle()
{
	clearscreen();
    char choice;
    int players_healthbar=player.health;
    int monsters_healthbar=100;
    cout<<"There is a pond in front of your house, but it was polluted by your hair dyes which contains ammonia. The fishes living in the pond evoluted to creatures that eat humans. However, you realised that they could only survive in an alkaline environment after your observation. There are 4 bottles on the shelf in your storeroom. Which would you choose to pour into the pond?"<<endl;
    cout << "Your health bar: " << players_healthbar <<endl;
    cout << "Monster's health bar: " << monsters_healthbar <<endl;
    cout << "( |><_>   <_><|  |><_> )"<< endl;
    cout << "A) Coke" << endl;
    cout << "B) Toilet bowl cleaner" << endl;
    cout << "C) Window cleaner" << endl;
    cout << "D) Milk" << endl;
    cout << "Q) Quit" << endl;
    while(players_healthbar>0 && monsters_healthbar>0){
        cout << "Your health bar: " << players_healthbar <<endl;
        cout << "Monster's health bar: " << monsters_healthbar <<endl;
        cin >> choice;
        switch(choice){
            case 'A':
                monsters_healthbar-=20;
                players_healthbar-=25;
                cout << "Only neutralized a bit" << endl;
                break;
            case 'B':
                monsters_healthbar-=100;
                break;
            case 'C':
                players_healthbar-=50;
                cout << "It did no harm:(" << endl;
                break;
            case 'D':
                monsters_healthbar-=10;
                players_healthbar-=25;
                cout << "Only neutralized a tiny bit" << endl;
                break;
            case 'Q':
                cout << "If you quit now, your score of this battle won't be saved. Are you sure? y/n" <<endl;
                char ans;
                cin >> ans;
                if(ans=='y'){
                    cout<<"You have been revived back to your recent checkpoint"<<endl;
		    cin.ignore();
		    acidville();
                }
                else{
                    cout<< "Invalid option" << endl;
                    cin >> choice;
                }
            default:
                cout << "Invalid option" << endl;
                cin >> choice;
        }
    }
    cout << "B is the correct answer as toilet bowl cleaners are acidic enough to neutralize the pond." << endl;
	cin.ignore();
    if(players_healthbar>monsters_healthbar && players_healthbar!=0){
	clearscreen();
        cout << "You win!!!" <<endl;
		cin.ignore();
		player.score += players_healthbar;
		cout << "Your score is " << players_healthbar <<endl;
	   	cin.ignore();
    }
    else{
	clearscreen();
        cout << "You lose..." <<endl;
		cout<<"You have been revived back to your recent checkpoint"<<endl;
		cin.ignore();
		acidville();
    }
    return;
}
