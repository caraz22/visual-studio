#include <iostream>
#include <vector>
#include "locations/Location.h"

using namespace std;

class Season;

class Character {
    private:
    string name;
    Season* birthSeason;
    string birthday;
    string homeAddress;
    Location homeTown;
    bool marriageable;
    vector<Character> family;

    public:
    Character();

    Character(string, bool);

    void setBirthday(Season*, int);
    void setHomeAddress(int, string);
    void setHomeTown(string);

    string getBirthday();
    Season* getBirthSeason();
    string getName();
    bool getMarriageable();
    string getHomeAddress();
    Location getHomeTown();
};