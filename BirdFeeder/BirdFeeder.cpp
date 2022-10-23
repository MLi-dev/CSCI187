//
// Created by Matthew Li on 10/22/22.
//

#include "BirdFeeder.h"
#include <iostream>
using namespace std;
void BirdFeeder::init() {
    FeedingDoor f;
    doors.push_back(f);
}
void BirdFeeder::operate() {
    lightLevel = s1.getLightLevel();
    if(lightLevel >= light_on_threshold) {
        for(auto door: doors) {
            door.open();
            cout<<"Door has opened!"<<endl;
        }
    } else {
        for(auto door: doors) {
            door.close();
            cout<<"Door has closed!"<<endl;
        }
    }
}