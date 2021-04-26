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

int loadsc(string n){
    string filename=n+".txt";
    int sc;
    ifstream fin;
    //open the player's file
    fin.open(filename);
    if (fin.fail()){
      cout << "Fail loading" << endl;
      titlescreen();
    }
    string line;
    ifstream myfile(filename);
    //reaching the corresponnding line of the player.score which is the first line
    for (int i = 0; i <= 0; i++){
      getline(myfile, line);
    }
    sc = stoi(line); //changing the string to int
    fin.close();
    //return the score
    return sc;
}

int loadst(string n){
    string filename=n+".txt";
    int st;
    ifstream fin;
    //open the player's file
    fin.open(filename);
    if (fin.fail()){
      cout << "Fail loading" << endl;
      exit(1);
    }
    string line;
    ifstream myfile(filename);
    //reaching the corresponnding line of the player.stage which is the second line
    for (int i = 0; i <= 1; i++){
      getline(myfile, line);
    }
    st = stoi(line); //changing the string to int
    fin.close();
    //return the stage
    return st;
}

vector<int> loado(string n){
    string filename=n+".txt";
    vector<int> o;
    ifstream fin;
    //open the player's file
    fin.open(filename);
    if (fin.fail()){
      cout << "Fail loading" << endl;
      exit(1);
    }
    string line;
    ifstream myfile(filename);
    //reaching the corresponnding line of the player.order which is the third line
    for (int i = 0; i <= 2; i++){
      getline(myfile, line);
    }
    string item;
    stringstream line2;
    line2.str(line);
    while (getline(line2, item, ',')) {
        o.push_back(stoi(item)); //changing the string to int and create a vector
    }
    fin.close();
    //return the order
    return o;
}

int loadh(string n){
    string filename=n+".txt";
    int h;
    ifstream fin;
    //open the player's file
    fin.open(filename);
    if (fin.fail()){
      cout << "Fail loading" << endl;
      exit(1);
    }
    string line;
    ifstream myfile(filename);
    //reaching the corresponnding line of the player.health which is the fourth line
    for (int i = 0; i <= 3; i++){
      getline(myfile, line);
    }
    h = stoi(line); //changing the string to int
    fin.close();
    //return the health
    return h;
}

int loadmh(string n){
    string filename=n+".txt";
    int mh;
    ifstream fin;
    //open the player's file
    fin.open(filename);
    if (fin.fail()){
      cout << "Fail loading" << endl;
      exit(1);
    }
    string line;
    ifstream myfile(filename);
    //reaching the corresponnding line of the player.maxHealth which is the fifth line
    for (int i = 0; i <= 4; i++){
      getline(myfile, line);
    }
    mh = stoi(line); //changing the string to int
    fin.close();
    remove(filename.c_str()); //delete the player's file, so next time it can load the latest saving(i.e. each file only has 5 lines)
    //return the maxHealth
    return mh;
}

void load(){
    string name;
    cout << "Welcome back, my friend:)" << endl;
    cout << "Please tell us your name" <<endl;
    cin.ignore();
    getline(cin,name); //input name to open his/her file
    player.name=name;
    //returning the info to the data structure
    player.score = loadsc(player.name);
    player.stage = loadst(player.name)-1;
    player.order = loado(player.name);
    player.health = loadh(player.name);
    player.maxHealth = loadmh(player.name);
    return;
}
