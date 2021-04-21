#include <iostream>
using namespace std;
int main(){
    char choice;
    int players_healthbar=100;
    int monsters_healthbar=100;
    cout << "There is a pond in front of your house, but it was polluted by your hair dyes which contains ammonia.";
    cout << "The fishes living in the pond evoluted to creatures that eat humans." <<endl;
    cout << "However, you realised that they could only survive in an alkaline environment after your observation." << endl;
    cout << "There are 4 bottles on the shelf in your storeroom. Which would you choose to use to ?"<<endl;
    cout << "Your health bar: " << players_healthbar <<endl;
    cout << "Monster's health bar: " << monsters_healthbar <<endl;
    cout << "( |><_>   <_><|  |><_> )"<< endl;
    cout << "A) Coke" << endl;
    cout << "B) Toilet bowl cleaner" << endl;
    cout << "C) Window cleaner" << endl;
    cout << "D) Milk" << endl;
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
            default:
                cout << "Invalid option" << endl;
                cin >> choice;
        }
    }
    cout << "B is the correct answer as toilet bowl cleaners are acidic enough to neutralize the pond." << endl;
    if(players_healthbar>monsters_healthbar && players_healthbar!=0){
        cout << "You win!!!" <<endl;  
    }
    else{
        cout << "You lose..." <<endl;
    }
    cout << "Your score is " << players_healthbar <<endl;
    return players_healthbar;
}
