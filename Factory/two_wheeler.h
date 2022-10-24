//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_TWO_WHEELER_H
#define CREATIONALDPS_TWO_WHEELER_H


#include <iostream>
#include "vehicle.h"

class TwoWheeler : public Vehicle {
    void printVehicle() override {
        std::cout << "I am Two-Wheeler";
    }
};


#endif //CREATIONALDPS_TWO_WHEELER_H
