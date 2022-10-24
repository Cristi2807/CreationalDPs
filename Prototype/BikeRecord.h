//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_BIKERECORD_H
#define CREATIONALDPS_BIKERECORD_H

#include <iostream>
#include "Record.h"

using namespace std;

class BikeRecord : public Record {
private:
    string m_bikeName;
    int m_ID;

public:
    BikeRecord(string bikeName, int ID);

    void print() override;

    unique_ptr<Record> clone() override;
};


#endif //CREATIONALDPS_BIKERECORD_H
