//
// Created by Matthew Li on 10/22/22.
//

#include "Sensor.h"
#include <cstdlib>

int Sensor:: getLightLevel() {
    int lightLevel = rand()%100 + 1;
    return lightLevel;
}