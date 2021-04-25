#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "player.h"

using namespace std;

void save(string n, string i, int Score, int Stage, int order, int h, int mh){
  string filename=n+".txt"
  ofstream fout;
  fout.open(filename);
  if (fout.fail()){
    cout << "Fail saving" << endl;
    exit(1);
  }
  for (int j=0; j<i.size()-1; j++){
    fout << i.at(j) << "," ;
  }
  fout << i.at(i.size()) <<endl;
  fout << Score <<endl;
  fout << Stage <<endl;
  for (int k=0; k<2; k++){
    fout << order.at(k) << "," ;
  }
  fout << order.at(2) << endl;
  fout << h <<endl;
  fout << mh <<endl;
  fout.close();
}

int main(){
  player();
  Player player;
  save(player.name, player.inventory, player.score, player.stage, player.order, player.health, player.maxHealth);
  return 0;
}
