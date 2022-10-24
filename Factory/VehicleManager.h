//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_VEHICLEMANAGER_H
#define CREATIONALDPS_VEHICLEMANAGER_H

#include "vehicle.h"

class VehicleManager {
public:
    ~VehicleManager();

    Vehicle *getVehicle();

    explicit VehicleManager(VehicleType type);

private:
    Vehicle *pVehicle;
};


#endif //CREATIONALDPS_VEHICLEMANAGER_H
