//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_FOUR_WHEELER_H
#define CREATIONALDPS_FOUR_WHEELER_H

#include <iostream>
#include "vehicle.h"


class FourWheeler : public Vehicle {
    void printVehicle() override {
        std::cout << "I am Two-Wheeler";
    }
};


#endif //CREATIONALDPS_FOUR_WHEELER_H
