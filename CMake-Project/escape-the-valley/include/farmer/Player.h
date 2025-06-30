#include <iostream>

using namespace std;

class Player {
    private:
    string name;
    int amountOfGold;

    public:
    Player(string);

    string getName();
    int getAmountOfGold();

    void adjustGold(int, bool);
};