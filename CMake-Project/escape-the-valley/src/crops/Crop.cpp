#include "crops/Crop.h"

Crop::Crop(string cropName, Season& cropSeason) 
    : name(cropName), season(cropSeason) { }

void Crop::setCostOfSeed(int costOfCropSeeds) {
    costOfSeeds = costOfCropSeeds;
}

void Crop::setDaysTillHarvest(int daysTillCropHarvest) {
    daysTillHarvest = daysTillCropHarvest;
}

void Crop::setSellPrice(int cropSellPrice) {
    sellPrice = cropSellPrice;
}

string Crop::getCropName() {
    return name;
}

Season& Crop::getSeason() {
    return season;
}

int Crop::getCostOfSeeds() {
    return costOfSeeds;
}

int Crop:: getDaysTillHarvest() {
    return daysTillHarvest;
}

int Crop::getSellPrice() {
    return sellPrice;
}

int Crop::totalCost(int quantity) {
    return this->getCostOfSeeds() * quantity;
}