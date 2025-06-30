#include <string>
#include "seasons/Season.h"

using namespace std;

Character::Character(string characterName, bool isMarriageable) {
    name = characterName;
    marriageable = isMarriageable;
}

void Character::setBirthday(Season* characterBirthSeason, int characterBirthDay) {
    birthSeason = characterBirthSeason;
    birthday = birthSeason->getName() + " " + to_string(characterBirthDay);
}

void Character::setHomeAddress(int homeNumber, string homeStreet) {
    homeAddress = to_string(homeNumber) + " " + homeStreet;
}

string Character::getBirthday() {
    return birthday;
}

Season* Character::getBirthSeason() {
    return birthSeason;
}

string Character::getName() {
    return name;
}

bool Character::getMarriageable() {
    return marriageable;
}

string Character::getHomeAddress() {
    return homeAddress;
}

Location Character::getHomeTown() {
    return homeTown;
}