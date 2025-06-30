#include "shops/Shop.h"

Shop::Shop(string shopName, Location shopLocation) {
    name = shopName;
    location = shopLocation;
}

void Shop::setOwner(Character shopOwner) {
    owner = shopOwner;
}

void Shop::setDaysOpen(vector<string> shopDaysOpen) {
    daysOpen = shopDaysOpen;
}

void Shop::setOpeningHour(int shopOpeningHour) {
    openingHour = shopOpeningHour;
}

void Shop::setClosingHour(int shopClosingHour) {
    closingHour = shopClosingHour;
}

Character Shop::getOwner() {
    return owner;
}

Location Shop::getLocation() {
    return location;
}

int Shop::getHours() {
    if (openingHour < 6) {
        openingHour += 12;
    }
    if (closingHour < openingHour) {
        closingHour += 12;
    }

    return closingHour - openingHour;
}