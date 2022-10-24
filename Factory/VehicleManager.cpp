//
// Created by cristi on 10/24/22.
//

#include "VehicleManager.h"

VehicleManager::VehicleManager(VehicleType type) {
    pVehicle = Vehicle::Create(type);
}

VehicleManager::~VehicleManager() {
    if (pVehicle) {
        delete pVehicle;
        pVehicle = nullptr;
    }
}

Vehicle *VehicleManager::getVehicle() {
    return pVehicle;
}
