#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <fstream>
#include <iterator>
#include <sstream>
#include "player.h"
#include "titlescreen.h"

using namespace std;

vector<string> loadi(string n){
    string filename=n+".txt";
    vector<string> i;
    ifstream fin;
    fin.open(filename);
    if (fin.fail()){
        cout << "Fail loading" << endl;
        titlescreen();
    }
    string line;
    ifstream myfile(filename);
    for (int j = 0; j <= 0; j++){
        getline(myfile, line);
    }
    string item;
    stringstream line2;
    line2.str(line);
    while (getline(line2, item, ',')) {
        i.push_back(item);
    }
    fin.close();
    return i;
}

int loadsc(string n){
    string filename=n+".txt";
    int sc;
    ifstream fin;
    fin.open(filename);
    if (fin.fail()){
      cout << "Fail loading" << endl;
      exit(1);
    }
    string line;
    ifstream myfile(filename);
    for (int i = 0; i <= 1; i++){
      getline(myfile, line);
    }
    sc = stoi(line);
    fin.close();
    return sc;
}

int loadst(string n){
    string filename=n+".txt";
    int st;
    ifstream fin;
    fin.open(filename);
    if (fin.fail()){
      cout << "Fail loading" << endl;
      exit(1);
    }
    string line;
    ifstream myfile(filename);
    for (int i = 0; i <= 2; i++){
      getline(myfile, line);
    }
    st = stoi(line);
    fin.close();
    return st;
}

vector<int> loado(string n){
    string filename=n+".txt";
    vector<int> o;
    ifstream fin;
    fin.open(filename);
    if (fin.fail()){
      cout << "Fail loading" << endl;
      exit(1);
    }
    string line;
    ifstream myfile(filename);
    for (int i = 0; i <= 3; i++){
      getline(myfile, line);
    }
    string item;
    stringstream line2;
    line2.str(line);
    while (getline(line2, item, ',')) {
        o.push_back(stoi(item));
    }
    fin.close();
    return o;
}

int loadh(string n){
    string filename=n+".txt";
    int h;
    ifstream fin;
    fin.open(filename);
    if (fin.fail()){
      cout << "Fail loading" << endl;
      exit(1);
    }
    string line;
    ifstream myfile(filename);
    for (int i = 0; i <= 4; i++){
      getline(myfile, line);
    }
    h = stoi(line);
    fin.close();
    return h;
}

int loadmh(string n){
    string filename=n+".txt";
    int mh;
    ifstream fin;
    fin.open(filename);
    if (fin.fail()){
      cout << "Fail loading" << endl;
      exit(1);
    }
    string line;
    ifstream myfile(filename);
    for (int i = 0; i <= 5; i++){
      getline(myfile, line);
    }
    mh = stoi(line);
    fin.close();
    remove(filename.c_str());
    return mh;
}

void load(){
    string name;
    cout << "Welcome back, my friend:)" << endl;
    cout << "Please tell us your name" <<endl;
    getline(cin,name);
    player.name=name;
    player.inventory = loadi(player.name);
    player.score = loadsc(player.name);
    player.stage = loadst(player.name);
    player.order = loado(player.name);
    player.health = loadh(player.name);
    player.maxHealth = loadmh(player.name);
    return;
}
