#ifndef TITLESCREEN_H
#define TITLESCREEN_H

#include <vector>
#include <string>

using namespace std;

struct Player{
    string name;
    int order[3];
    vector<string> inventory;
    int score;
    int stage;
    int health;
    int maxHealth;

  
};
extern Player player;

#endif
