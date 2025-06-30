#include <iostream>
#include <vector>
#include "crops/Crop.h"
#include "festivals/Festival.h"
#include "villagers/Character.h"

using namespace std;

class Season {
    private:
    string name;
    int year;
    vector<Festival> festivals;
    vector<Character> birthdays;
    vector<Crop> crops;

    public:
    Season();
    
    Season(string);
    
    void setFestivals(vector<Festival>);
    void setBirthdays(vector<Character>);
    void setCrops(vector<Crop>);

    string getName();
    vector<Festival> getFestivals();
    vector<Character> getBirthdays();
    vector<Crop> getCrops();

    int addYear();

    bool operator==(const Season &);
};