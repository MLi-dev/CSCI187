//
// Created by Matthew Li on 10/22/22.
//

#include "FeedingDoor.h"

void FeedingDoor:: open() {
    if(!doorOpen) {
        doorOpen = true;
    }

}
void FeedingDoor:: close() {
    if(doorOpen) {
        doorOpen = false;
    }
}
bool FeedingDoor :: isOpen() {
    return doorOpen;
}