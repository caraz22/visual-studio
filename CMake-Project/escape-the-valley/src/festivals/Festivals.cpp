#include "festivals/Festivals.h"
#include "seasons/Seasons.h"

Festival eggFestival("Egg Festival", spring);
Festival flowerDance("Flower Dance", spring);
Festival luau("Luau", summer);
Festival moonlightJellies("Dance of the Moonlight Jellies", summer);
Festival sdvFair("Stardew Valley Fair", fall);
Festival spiritsEve("Spirit's Eve", fall);
Festival festOfIce("Festival of Ice", winter);
Festival feastOfWinterStar("Feast of the Winter Star", winter);

vector<Festival> allFestivals = {eggFestival, flowerDance, luau, moonlightJellies, sdvFair, spiritsEve, festOfIce, feastOfWinterStar};

Festivals::Festivals() { }

vector<Festival> Festivals::addFestsToSeasons(const Season& festivalSeason) {
    vector<Festival> seasonFestivals;
    for (int i = 0; i < allFestivals.size(); i++) {
        if (allFestivals[i].getSeason() == festivalSeason) {
            seasonFestivals.push_back(allFestivals[i]);
        } 

    }

    return seasonFestivals;
}
