#include <iostream>
#include <string>
#include <cstdlib>
#include "titlescreen.h"
#include "clearscreen.h"


using namespace std;


void title()
{
cout<<"_________ .__                   .__         __                  _________       .__       .__"<<endl;
cout<<"\\_   ___ \\|  |__   ____   _____ |__| ______/  |________ ___.__. \\_   ___ \\______|__| _____|__| ______"<<endl;
cout<<"/    \\  \\/|  |  \\_/ __ \\ /     \\|  |/  ___|   __\\_  __ <   |  | /    \\  \\|_  __ \\  |/  ___/  |/  ___/"<<endl;
cout<<"\\     \\___|   Y  \\  ___/|  Y Y  \\  |\\___ \\ |  |  |  | \\/\\___  | \\     \\___|  | \\/  |\\___ \\|  |\\___ \\ "<<endl;
cout<<" \\______  /___|  /\\___  >__|_|  /__/____  >|__|  |__|   / ____|  \\______  /__|  |__/____  >__/____  >"<<endl;
cout<<"        \\/     \\/     \\/      \\/        \\/              \\/              \\/              \\/        \\/"<<endl;
}

void options()
{
	title();
	cout<<"----------------"<< endl;
	cout<<"1. New Game"<<endl;
	cout<<"2. Load Game"<<endl;
	cout<<"3. Credits"<<endl;
	cout<<"4. Exit"<<endl;
	return;
}

void credits()
{
	int wait;
    clearscreen();
    cout<<"Coded by James and Wing"<<endl;
	cout<<endl<<"Press any key to continue.."<<endl;
	cin.ignore();
	cin.get();
	clearscreen();

}

void titlescreen()
{
	clearscreen();
    int option;
    while ( option != 4 ){
		options();
        cout<<endl;
        cout<<"Option: ";
        cin >> option;
        switch(option){
            case 1:
		clearscreen();
		return;
                break;
            case 2:
		clearscreen();
                return;
                break;
            case 3:
                credits();
                break;
			case 4:
				clearscreen();
				cout<<"Thanks for playing!"<<endl;
				exit(0);
			default:
				cout<<"Invalid option" <<endl;
				break;
        }

    }


}
