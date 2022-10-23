//
// Created by Matthew Li on 10/22/22.
//

#include "RemoteControl.h"
#include <iostream>
using namespace std;

void RemoteControl:: pressButton() {
    if(door.isOpen()) {
        door.close();
        cout<<"Door closed via remote!"<<endl;
    } else {
        door.open();
        cout<<"Door opened via remote!"<<endl;
    }
}