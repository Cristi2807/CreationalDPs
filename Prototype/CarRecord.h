//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_CARRECORD_H
#define CREATIONALDPS_CARRECORD_H

#include "Record.h"
#include <iostream>

using namespace std;

class CarRecord : public Record {
private:
    std::string m_carName;
    int m_ID;

public:
    CarRecord(string carName, int ID);

    void print() override;

    unique_ptr<Record> clone() override;
};


#endif //CREATIONALDPS_CARRECORD_H
