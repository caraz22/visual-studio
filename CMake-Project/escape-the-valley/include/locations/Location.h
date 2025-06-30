#include <iostream>

using namespace std;

class Location {
    private:
    string name;
    string currentLocation;

    public:
    Location();
    
    Location(string);

    void setCurrentLocation(string);    
    
    string getLocationName();
    string getCurrentLocation();

    // string locationRelativity();
};