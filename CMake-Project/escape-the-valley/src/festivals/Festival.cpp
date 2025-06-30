#include "festivals/Festival.h"

Festival::Festival(string festivalName, Season& festivalSeason) 
    : name(festivalName), season(festivalSeason) { }

void Festival::setTheme(string festivalTheme) {
    theme = festivalTheme;
}

string Festival::getName() {
    return name;
}

Season& Festival::getSeason() {
    return season;
}

string Festival::getTheme() {
    return theme;
}