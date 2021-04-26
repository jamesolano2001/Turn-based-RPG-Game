#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "player.h"
#include "titlescreen.h"

using namespace std;

void save(){
    //create a file with the username
    string filename=player.name+".txt";
    ofstream fout;
    fout.open(filename);
    if (fout.fail()){
        cout << "Fail saving" << endl;
        exit(1);
    }
    //writing different information in separate lines, so that the info could be easily obtain in the load function
    fout << player.score <<endl;
    fout << player.stage <<endl;
    fout << player.order[0] << "," << player.order[1] << "," << player.order[2] <<endl;
    fout << player.health <<endl;
    fout << player.maxHealth <<endl;
    fout.close();
    //return to the very beginning menu of the game
    titlescreen();
}
