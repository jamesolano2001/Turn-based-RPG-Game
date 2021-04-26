#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

using namespace std;

struct Player{
    string name;
    vector<int> order;
    int score;
    int stage;
    int health;
    int maxHealth;
	void set_health( const int val)
	{
		maxHealth = val;
		health = maxHealth;
	}

};
extern Player player;

#endif
