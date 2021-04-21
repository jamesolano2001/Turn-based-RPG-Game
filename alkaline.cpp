#include <iostream>
using namespace std;
int main(){
    char choice;
    int players_healthbar=100;
    int monsters_healthbar=100;
    cout << "This monster in front of you is contaminated by sulphuric acid, so it attacks people with its acidic saliva.";
    cout << "The floor has 4 kinds of liquids. Which would you choose to use?"<<endl;
    cout << "Your healthbar: " << players_healthbar <<endl;
    cout << "Monster's healthbar: " << monsters_healthbar <<endl;
    cout << "/╲/\\╭ºoꍘoº╮/\\╱\\"<< endl;
    cout << "A) A drain cleaner" << endl;
    cout << "B) A bottle of liquid with a pungent smell" << endl;
    cout << "C) A liquid with reddish brown precipitate and rusty smell" << endl;
    cout << "D) A bottle of colorless liquid with vinegar smell" << endl;
    while(players_healthbar>0 && monsters_healthbar>0){
        cout << "Your healthbar: " << players_healthbar <<endl;
        cout << "Monster's healthbar: " << monsters_healthbar <<endl;
        cin >> choice;
        switch(choice){
            case 'A':
                monsters_healthbar-=100;
                break;
            case 'B':
                monsters_healthbar-=30;
                break;
            case 'C':
                monsters_healthbar-=30;
                break;
            case 'D':
                monsters_healthbar-=30;
                break;
            default:
                cout << "Invalid option" << endl;
                cin >> choice;
        }
        if(monsters_healthbar>0){
            players_healthbar-=25;
        }
    }
    if((players_healthbar>monsters_healthbar) && (players_healthbar!=0)){
        cout << "You win!!!" <<endl;  
    }
    else{
        cout << "You lose..." <<endl;
    }
    cout << "Your score is " << players_healthbar <<endl;
    return players_healthbar;
}
