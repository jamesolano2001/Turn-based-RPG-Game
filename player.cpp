#include <iostream>
#include <string>
#include <vector>
#include "player.h"

using namespace std;

struct Player{
    string name;
    int order[3];
    vector<string> inventory;
    int score;
    int stage;
  
};
