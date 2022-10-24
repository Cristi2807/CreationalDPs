//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_WINBUTTON_H
#define CREATIONALDPS_WINBUTTON_H

#include "Button.h"
#include <iostream>

class WinButton : public Button {
public:
    void paint() {
        std::cout << " Windows Button \n";
    }
};


#endif //CREATIONALDPS_WINBUTTON_H
