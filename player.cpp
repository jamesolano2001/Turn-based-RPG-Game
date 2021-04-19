#include <iostream>
#include <string>
#include "player.h"

using namespace std;

player::player(string name, int score = 0, int level = 1)
{
  setName(name);
  setLevel(level);
  setMaxHealth();
  setHealth(pMaxHealth);
  setDamage();
}

void player::setName(string name)
{
  pName = name;
}

void player::setLevel(int level)
{
  pLevel = level;
}
