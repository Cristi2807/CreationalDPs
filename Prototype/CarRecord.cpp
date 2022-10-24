//
// Created by cristi on 10/24/22.
//

#include "CarRecord.h"

#include <utility>

CarRecord::CarRecord(string carName, int ID) : m_carName(std::move(carName)), m_ID(ID) {
}

void CarRecord::print() {
    cout << "Car Record" << endl
         << "Name  : " << m_carName << endl
         << "Number: " << m_ID << endl <<
         endl;
}

unique_ptr<Record> CarRecord::clone() {
    return make_unique<CarRecord>(*this);
}