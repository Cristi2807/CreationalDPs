//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_GUIFACTORY_H
#define CREATIONALDPS_GUIFACTORY_H

#include "Button.h"
#include "ScrollBar.h"

class GUIFactory {
public:
    virtual Button *createButton() = 0;

    virtual ScrollBar *createScrollBar() = 0;
};


#endif //CREATIONALDPS_GUIFACTORY_H
