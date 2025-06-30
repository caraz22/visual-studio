#include "locations/Location.h"

Location::Location(string locationName) {
    name = locationName;
}

void Location::setCurrentLocation(string currentLocationName) {
    currentLocation = currentLocationName;
}

string Location::getLocationName() {
    return name;
}

string Location::getCurrentLocation() {
    return currentLocation;
}

// string Location::locationRelativity() {
    
// }