#include "residences/Residence.h"

Residence::Residence(string residenceAddress, Location residenceLocation) {
    address = residenceAddress;
    location = residenceLocation;
}

void Residence::setHabitants(vector<Character> residenceHabitants) {
    habitants = residenceHabitants;
}

string Residence::getAddress() {
    return address;
}

vector<Character> Residence::getHabitants() {
    return habitants;
}

Location Residence::getLocation() {
    return location;
}