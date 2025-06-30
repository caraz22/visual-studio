#include <iostream>
#include <vector>
#include "villagers/Character.h"

using namespace std;

class Shop {
    private:
    string name;
    Character owner;
    Location location;
    vector<string> daysOpen;
    int openingHour;
    int closingHour;

    public:
    Shop(string, Location);

    void setOwner(Character);
    void setDaysOpen(vector<string>);
    void setOpeningHour(int);
    void setClosingHour(int);

    Character getOwner();
    Location getLocation();
    
    int getHours();
};