#include <iostream>
#include <string>
#include <cstdlib>




using namespace std;

void clearscreen()
{
    cout << "\033[2J\033[1;1H";
}


void options()
{
	cout<<"Chemistry Crisis"<< endl;
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

int main()
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
                //newgame
                break;
            case 2:
                //loadgame
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
