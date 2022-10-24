//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_VEHICLE_H
#define CREATIONALDPS_VEHICLE_H

enum VehicleType {
    VT_TwoWheeler, VT_FourWheeler
};

class Vehicle {
public:
    virtual void printVehicle() = 0;

    static Vehicle *Create(VehicleType type);

    virtual ~Vehicle() = default;
};


#endif //CREATIONALDPS_VEHICLE_H
