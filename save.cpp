#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "player.h"
#include "titlescreen.h"

using namespace std;

void save(){
    string filename=player.name+".txt";
    ofstream fout;
    fout.open(filename);
    if (fout.fail()){
        cout << "Fail saving" << endl;
        exit(1);
    }
    fout << player.score <<endl;
    fout << player.stage <<endl;
    fout << player.order[0] << "," << player.order[1] << "," << player.order[2] <<endl;
    fout << player.health <<endl;
    fout << player.maxHealth <<endl;
    fout.close();
    titlescreen();
}
