//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_MACBUTTON_H
#define CREATIONALDPS_MACBUTTON_H

#include "Button.h"
#include <iostream>

class MacButton : public Button {
public:
    void paint() {
        std::cout << " Mac Button \n";
    }
};


#endif //CREATIONALDPS_MACBUTTON_H
