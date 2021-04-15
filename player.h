#include <string>

using namespace std;

class Player
{
public:
    player(string,string,int,int);
    void setName(string);
    void health(double);
    void maxHealth();
    void setDamage();
    string getName();
    double getHealth();
    double getMaxHealth();
    int getDamage();
    private:
    string playerName;
    double playerHealth;
    double playerMaxHealth;
    int playerDamage;
};
