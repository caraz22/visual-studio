#include <iostream>
#include "farmer/Player.h"

using namespace std;

class Tool {
    private:
    string name;
    string status;
    int upgradeCost;
    // string upgradeIngredients;

    public:
    Tool(string, string);

    void setName(string);
    void setStatus(string);
    void setUpgradeCost(int);
    // void setUpgradeIngredients(string);

    string getName();
    string getStatus();
    int getUpgradeCost();
    // string getUpgradeIngredients();

    void upgradeTool(Player, string, string, int);
};