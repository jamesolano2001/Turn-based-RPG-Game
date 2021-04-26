#include <iostream>
#include "alkaline.h"
#include "alkacity.h"
#include "clearscreen.h"
#include "player.h"
using namespace std;
void alkaline_battle(){
	clearscreen();
    char choice;
    int players_healthbar=player.health;
    int monsters_healthbar=100;
    cout << "This monster in front of you is contaminated by sulphuric acid, so it attacks people with its acidic saliva. The floor has 4 kinds of liquids. Which would you choose to use?"<<endl;
    cout << "Your health bar: " << players_healthbar <<endl;
    cout << "Monster's health bar: " << monsters_healthbar <<endl;
    cout << "/╲/\\╭ºoꍘoº╮/\\╱\\"<< endl;
    cout << "A) A drain cleaner" << endl;
    cout << "B) A bottle of liquid with a pungent smell" << endl;
    cout << "C) A liquid with reddish brown precipitate and rusty smell" << endl;
    cout << "D) A bottle of colorless liquid with vinegar smell" << endl;
    cout << "Q) Quit" << endl;
    while(players_healthbar>0 && monsters_healthbar>0){
        cout << "Your health bar: " << players_healthbar <<endl;
        cout << "Monster's health bar: " << monsters_healthbar <<endl;
        cin >> choice;
        switch(choice){
            case 'A':
                monsters_healthbar-=100;
                break;
            case 'B':
                monsters_healthbar-=30;
                players_healthbar-=25;
                cout << "Only the saliva is neutralized" << endl;
                break;
            case 'C':
                monsters_healthbar-=30;
                players_healthbar-=25;
                cout << "Only the saliva is neutralized" << endl;
                break;
            case 'D':
                players_healthbar-=50;
                cout << "It did no harm:(" << endl;
                break;
            case 'Q':
                cout << "If you quit now, your score of this battle won't be saved. Are you sure? y/n" <<endl;
                char ans;
                cin >> ans;
                if(ans=='y'){
                    cout<<"You have been revived back to your recent checkpoint"<<endl;
		    cin.ignore();
		    alkacity();
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
    cout << "A is the correct answer as drain cleaners are made of sodium hydroxide, only NaOH is strong enough to neutralize and burn the monster." << endl;
    if(players_healthbar>monsters_healthbar && players_healthbar!=0){
        cout << "You win!!!" <<endl;
		cin.ignore();
		player.score += players_healthbar;
		cout << "Your score is " << players_healthbar <<endl;
	   	cin.ignore();
    }
    else{
        cout << "You lose..." <<endl;
		cout<<"You have been revived back to your recent checkpoint"<<endl;
		cin.ignore();
		alkacity();
    }
    return;
}
