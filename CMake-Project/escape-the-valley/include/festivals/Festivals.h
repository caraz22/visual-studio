#include "festivals/Festival.h"
#include "seasons/Season.h"

extern Festival eggFestival;
extern Festival flowerDance;
extern Festival luau;
extern Festival moonlightJellies;
extern Festival sdvFair;
extern Festival spiritsEve;
extern Festival festOfIce;
extern Festival feastOfWinterStar;

class Festivals {
    public:
        Festivals();

    vector<Festival> addFestsToSeasons(vector<Festival>, Season);
};