#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "player.h"

using namespace std;

void save(){
  string filename=player.name+".txt";
  ofstream fout;
  fout.open(filename);
  if (fout.fail()){
    cout << "Fail saving" << endl;
    exit(1);
  }
  for (int j=0; j<player.inventory.size()-1; j++){
    fout << player.inventory.at(j) << "," ;
  }
  fout << player.inventory.at(player.inventory.size()-1) <<endl;
  fout << player.score <<endl;
  fout << player.stage <<endl;
  for (int k=0; k<2; k++){
    fout << player.order.at(k) << "," ;
  }
  fout << player.order.at(2) << endl;
  fout << player.health <<endl;
  fout << player.maxHealth <<endl;
  fout.close();
}

