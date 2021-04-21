#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void clearscreen()
{
    cout << string( 100, '\n' );
}

void credits()
{
    clearscreen();
    cout<<"Coded by James and Wing"<<endl;
    cout<<endl;
    system("pause");
    clearscreen();
    return;
}

void titlescreen()
{
    int option = 0;
    while ( option != 4 ){
        cout<<"Chemistry Crisis"<< endl;
        cout<<"----------------"<< endl;
        cout<<"1. New Game"<<endl;
        cout<<"2. Load Game"<<endl;
        cout<<"3. Credits"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<endl;
        cout<<"Option: ";
        cin >> option;
        switch(option){
            case 1:
                //newgame
                break;
            case 2:
                //loadgame
                break;
            case 3:
                credits();
                option = 0;
                break;
        }
    }
    cout<<"Thanks for playing!"<<endl;
    exit(0);
  
}
