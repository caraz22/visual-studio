#include <iostream>

using namespace std;

class Season;

class Crop {
    private:
    string name;
    Season& season;
    int costOfSeeds;
    int daysTillHarvest;
    int sellPrice;

    public:
    Crop(string, Season&);

    void setCostOfSeed(int);
    void setDaysTillHarvest(int);
    void setSellPrice(int);

    string getCropName();
    Season& getSeason();
    int getCostOfSeeds();
    int getDaysTillHarvest();
    int getSellPrice();

    int totalCost(int);
};