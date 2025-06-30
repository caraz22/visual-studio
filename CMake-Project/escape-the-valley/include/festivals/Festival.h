#include <iostream>

using namespace std;

class Season;

class Festival {
    private:
    string name;
    Season& season;
    string theme;

    public:
    Festival(string, Season&);

    void setTheme(string);

    string getName();
    Season& getSeason();
    string getTheme();
};