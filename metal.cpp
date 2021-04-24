#include <iostream>
#include <string>
using namespace std;
int main(){
    string choice;
    int players_healthbar=100;
    int monsters_healthbar=100;
    cout << "When you were walking in the forest, you have been surrounded by a bunch of 'worms'. They got metallic shells as the soil is polluted by heavy metals. Their shells have 3 layers. The inner one is made of lead, then it is zinc. The outter layer is potassium. How would you attack it?" << endl;
    cout << "(please type out your answer like this: ABC )"<<endl;
    cout << "Your health bar: " << players_healthbar <<endl;
    cout << "Monster's health bar: " << monsters_healthbar <<endl;
    cout << "                                                /~~\\"<< endl;
    cout << "  ____                                         /'o  |"<< endl;
    cout << ".~  | `\\             ,-~~~\\~-_               ,'  _/'|"<< endl;
    cout << "`\\_/   /'\\         /'`\\    \\  ~,             |     .'"<< endl;
    cout << "    `,/'  |      ,'_   |   |   |`\\          ,'~~\\  |"<< endl;
    cout << "     |   /`:     |  `\\ /~~~~\\ /   |        ,'    `.'"<< endl;
    cout << "     | /'  |     |   ,'      `\\  /`|      /'\\    /"<< endl;
    cout << "     `|   / \\_ _/ `\\ |         |'   `----\\   |  /'"<< endl;
    cout << "      `./'  | ~ |   ,'         |    |     |  |/'"<< endl;
    cout << "       `\\   |   /  ,'           `\\ /      |/~'"<< endl;
    cout << "         `\\/_ /~ _/               `~------'" << endl;
    cout << "A) Pour acids" << endl;
    cout << "B) Pour water" << endl;
    cout << "C) Steam" << endl;
    cout << "D) Pour alkalis" << endl;
    cout << "Q) Quit" << endl;
    while(players_healthbar>0 && monsters_healthbar>0){
        cout << "Your health bar: " << players_healthbar <<endl;
        cout << "Monster's health bar: " << monsters_healthbar <<endl;
        cin >> choice;
        if (choice=="BCA"){
          monsters_healthbar-=100;
          break;
        }
        else if (choice=="Q"){
            cout << "If you quit now, your score of this battle won't be saved. Are you sure? y/n" <<endl;
            char ans;
            cin >> ans;
            if(ans=='y'){
                return 0;
            }
        else{
          monsters_healthbar-=10;
          players_healthbar-=25;
        }
    }
    cout << "The seqence 'B C A' is the correct answer as lead only reacts with acids while zinc only reacts with steam." << endl;
    cout << "Kindly reminder: Alkalis only react with metal ions but not metals." << endl;
    if(players_healthbar>monsters_healthbar && players_healthbar!=0){
        cout << "You win!!!" <<endl;  
    }
    else{
        cout << "You lose..." <<endl;
    }
    cout << "Your score is " << players_healthbar <<endl;
    return players_healthbar;
}
