//
// Created by Matthew Li on 10/22/22.
//

#ifndef BIRDFEEDER_REMOTECONTROL_H
#define BIRDFEEDER_REMOTECONTROL_H

#include "FeedingDoor.h"

class RemoteControl {
private:
    FeedingDoor door;
public:
    void pressButton();

};


#endif //BIRDFEEDER_REMOTECONTROL_H
