#include <iostream>
#include "creator.h"
#include "chemistria.h"
#include "clearscreen.h"
using namespace std;

void creator()
{
    cout<<"                       .      "<<endl;
    cout<<"             /^\\     .        "<<endl;
    cout<<"        /\\   'V'              "<<endl;
    cout<<"       /__\\   I      O  o     "<<endl;
    cout<<"      //..\\\\  I     .         "<<endl;
    cout<<"      \\].`[/  I               "<<endl;
    cout<<"      /l\\/j\\  (]    .  O      "<<endl;
    cout<<"     /. ~~ ,\\/I          .    "<<endl;
    cout<<"     \\\\L__j^\\/I       o       "<<endl;
    cout<<"      \\/--v}  I     o   .     "<<endl;
    cout<<"      |    |  I   _________   "<<endl;
    cout<<"      |    |  I c(`       ')o "<<endl;
    cout<<"      |    l  I   \\.     ,/   "<<endl;
    cout<<"    _/j  L l\\_!  _//^---^\\\\_  "<<endl;
}
void final_battle()
{
	clearscreen();
    char choice;
    int players_healthbar=100;
    int monsters_healthbar=100;
    cout<<"You're final battle is against the creator! Only an attack as strong as a nuke can kill him!"<<endl;
    cout << "Your health bar: " << players_healthbar <<endl;
    cout << "Monster's health bar: ???" <<endl;
    creator();
    cout << "A) Summon an acidic monster to kill him" << endl;
    cout << "B) Craft a Calcium bomb" << endl;
    cout << "C)	Fire a Plutonium-239 Grenade Launcher" << endl;
    cout << "D) Punch him with a fist full of Uranium-238" << endl;
    cout << "Q) Quit" << endl;
    while(players_healthbar>0 && monsters_healthbar>0){
        cout << "Your health bar: " << players_healthbar <<endl;
        cout << "Monster's health bar: ???" <<endl;
        cin >> choice;
        switch(choice){
            case 'A':
                monsters_healthbar-=10;
                players_healthbar-=50;
                cout << "The acid monster tickles him." << endl;
                break;
            case 'B':
                monsters_healthbar-=10;
                break;
            case 'C':
                players_healthbar-=100;
                cout << "One-hit KO!" << endl;
                break;
            case 'D':
                monsters_healthbar-=10;
                players_healthbar-=49;
                cout << "Critical hit but it wasn't enough!" << endl;
                break;
            case 'Q':
                cout << "There is no escape!" <<endl;
                break;
        }
    }
    player.score+=players_healthbar;
    if(players_healthbar>monsters_healthbar && players_healthbar!=0){
        cout << "You did it!" <<endl;
		cin.ignore();
		cout << "Your score is " << players_healthbar <<endl;
	   	cin.ignore();
    }
    else{
        cout << "You lose..." <<endl;
		cout<<"You have been revived back to your recent checkpoint"<<endl;
		cin.ignore();
		chemistria();
    }
    return;
}
