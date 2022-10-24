//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_WINFACTORY_H
#define CREATIONALDPS_WINFACTORY_H

#include "GUIFactory.h"
#include "WinButton.h"
#include "WinScrollBar.h"


class WinFactory : public GUIFactory {
public:
    Button *createButton() {
        return new WinButton;
    }

    ScrollBar *createScrollBar() {
        return new WinScrollBar;
    }
};


#endif //CREATIONALDPS_WINFACTORY_H
