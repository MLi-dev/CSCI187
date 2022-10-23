//
// Created by Matthew Li on 10/22/22.
//

#ifndef BIRDFEEDER_FEEDINGDOOR_H
#define BIRDFEEDER_FEEDINGDOOR_H


class FeedingDoor {
private:
    bool doorOpen;
public:
    void open();
    void close();
    bool isOpen();

};


#endif //BIRDFEEDER_FEEDINGDOOR_H
