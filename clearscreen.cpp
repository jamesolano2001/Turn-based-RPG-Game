#include <iostream>
#include "clearscreen.h"
using namespace std;

void clearscreen()                  //this outputs blanks spaces equivalent to the size of the screen
{
    cout << "\033[2J\033[1;1H";
}
