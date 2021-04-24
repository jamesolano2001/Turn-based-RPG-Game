#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "player.h"

using namespace std;

void save(string n, string i, int Score, int Stage, int order){
  string filename=n+".txt"
  ofstream fout;
  fout.open(filename);
  if (fout.fail()){
    cout << "Fail saving" << endl;
    exit(1);
  }
  fout << i <<endl;
  fout << Score <<endl;
  fout << Stage <<endl;
  fout << order <<endl;
  fout.close();
}

int main(){
  player();
  save(player.name, player.inventory, player.score, player.stage, player.order);
  return 0;
}
