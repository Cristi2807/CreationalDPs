//
// Created by cristi on 10/24/22.
//

#include "vehicle.h"
#include "two_wheeler.h"
#include "four_wheeler.h"


Vehicle *Vehicle::Create(VehicleType type) {
    if (type == VT_TwoWheeler)
        return new TwoWheeler();
    else if (type == VT_FourWheeler)
        return new FourWheeler();
    else return nullptr;
}