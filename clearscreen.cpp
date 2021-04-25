#include <iostream>
#include "clearscreen.h"
using namespace std;

void clearscreen()
{
    cout << "\033[2J\033[1;1H";
}
