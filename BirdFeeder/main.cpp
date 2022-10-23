#include <iostream>
#include "BirdFeeder.h"
#include "Sensor.h"
#include "FeedingDoor.h"
#include "RemoteControl.h"

int main() {
    BirdFeeder b1;
    b1.init();
    for(int i = 0; i<10; i++) {
        b1.operate();
    }
    RemoteControl r1;
    r1.pressButton();
    r1.pressButton();
    return 0;
}
