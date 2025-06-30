#include <iostream>
#include "festivals/Festivals.h"
#include "seasons/Seasons.h"

using namespace std;

int main() {
    Festivals festivalManager;

    vector<Festival> springFestivals = festivalManager.addFestsToSeasons(spring);
    vector<Festival> summerFestivals = festivalManager.addFestsToSeasons(summer);
    vector<Festival> fallFestivals = festivalManager.addFestsToSeasons(fall);
    vector<Festival> winterFestivals = festivalManager.addFestsToSeasons(winter);


    cout << "Hello, World!";
}