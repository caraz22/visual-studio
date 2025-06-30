#include "tools/Tool.h"

Tool::Tool(string toolName, string toolStatus) {
    name = toolName;
    status = toolStatus;
}

void Tool::setName(string toolName) {
    name = toolName;
}

void Tool::setStatus(string toolStatus) {
    status = toolStatus;
}

void Tool::setUpgradeCost(int goldCost) {
    upgradeCost = goldCost;
}

string Tool::getName() {
    return name;
}

string Tool::getStatus() {
    return status;
}

void Tool::upgradeTool(Player farmer, string newToolName, string newToolStatus, int newUpgradeCost) {
    farmer.adjustGold(upgradeCost, false);
    this->setName(newToolName);
    this->setStatus(newToolStatus);
    this->setUpgradeCost(newUpgradeCost);
}