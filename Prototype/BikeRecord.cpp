//
// Created by cristi on 10/24/22.
//

#include "BikeRecord.h"


BikeRecord::BikeRecord(string bikeName, int ID) : m_bikeName(bikeName), m_ID(ID) {
}

void BikeRecord::print() {
    cout << "Bike Record" << endl
         << "Name  : " << m_bikeName << endl
         << "Number: " << m_ID << endl << endl;
}

unique_ptr<Record> BikeRecord::clone() {
    return make_unique<BikeRecord>(*this);
}