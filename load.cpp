#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "player.h"

using namespace std;

string loadi(string n){
  string filename=n+".txt"
  string i;
  ifstream fout;
  fin.open(filename);
  if (fin.fail()){
    cout << "Fail loading" << endl;
    exit(1);
  }
  string line;
  int number_of_lines = 0;
  ifstream myfile(filename);
  while (getline(myfile, line)){
    ++number_of_lines;
  }
  for (int j = 1; j <= (number_of_lines-4); j++){
    getline(f, line);
  }
  i = line;
  fin.close();
  return i;
}

int loadsc(string n){
  string filename=n+".txt"
  int sc;
  ifstream fout;
  fin.open(filename);
  if (fin.fail()){
    cout << "Fail loading" << endl;
    exit(1);
  }
  string line;
  int number_of_lines = 0;
  ifstream myfile(filename);
  while (getline(myfile, line)){
    ++number_of_lines;
  }
  for (int i = 1; i <= (number_of_lines-3); i++){
    getline(f, line);
  }
  sc = atoi(line);
  fin.close();
  return sc;
}

int loadst(string n){
  string filename=n+".txt"
  int st;
  ifstream fout;
  fin.open(filename);
  if (fin.fail()){
    cout << "Fail loading" << endl;
    exit(1);
  }
  string line;
  int number_of_lines = 0;
  ifstream myfile(filename);
  while (getline(myfile, line)){
    ++number_of_lines;
  }
  for (int i = 1; i <= (number_of_lines-2); i++){
    getline(f, line);
  }
  st = atoi(line);
  fin.close();
  return st;
}

int loado(string n){
  string filename=n+".txt"
  int o;
  ifstream fout;
  fin.open(filename);
  if (fin.fail()){
    cout << "Fail loading" << endl;
    exit(1);
  }
  string line;
  int number_of_lines = 0;
  ifstream myfile(filename);
  while (getline(myfile, line)){
    ++number_of_lines;
  }
  for (int i = 1; i <= (number_of_lines-2); i++){
    getline(f, line);
  }
  o = atoi(line);
  fin.close();
  return o;
}

int main(){
  player();
  Player a;
  cout << "Welcome back, my friend:)" << endl;
  cout << "Please tell us your name" <<endl;
  cin >> a;
  player.inventory = loadi(player.name);
  player.score = loadsc(player.name);
  player.stage = loadst(player.name);
  player.order = loado(player.name);
  return 0;
}
