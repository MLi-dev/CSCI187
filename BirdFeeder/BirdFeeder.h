//
// Created by Matthew Li on 10/22/22.
//

#ifndef BIRDFEEDER_BIRDFEEDER_H
#define BIRDFEEDER_BIRDFEEDER_H
#include "Sensor.h"
#include "FeedingDoor.h"
#include <vector>
using namespace std;

class BirdFeeder {
public:
    void operate();
    void init();
private:
    int light_on_threshold = 40;
    int light_off_threshold = 25;
    int lightLevel;
    Sensor s1;
    vector<FeedingDoor> doors;


};


#endif //BIRDFEEDER_BIRDFEEDER_H
