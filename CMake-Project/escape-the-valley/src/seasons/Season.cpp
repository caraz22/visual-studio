#include "seasons/Season.h"

Season::Season(string seasonName) {
    name = seasonName;
    year = 1;
}

void Season::setFestivals(vector<Festival> seasonFestivals) {
    festivals = seasonFestivals;
}

void Season::setBirthdays(vector<Character> seasonBirthdays) {
    birthdays = seasonBirthdays;
}

void Season::setCrops(vector<Crop> seasonCrops) {
    crops = seasonCrops;
}

string Season::getName() {
    return name;
}

vector<Festival> Season::getFestivals() {
    return festivals;
}

vector<Character> Season::getBirthdays() {
    return birthdays;
}

vector<Crop> Season::getCrops() {
    return crops;
}

int Season::addYear() {
    year += 1;
}

bool Season::operator==(const Season & otherSeason) {
    if (name == otherSeason.name) {
        return true;
    } else {
        return false;
    }
}