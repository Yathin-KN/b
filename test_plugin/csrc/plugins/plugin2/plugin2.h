#pragma once

#include <iostream>
#include <string>
#include "../base_device.h"

class Plugin2 : public BaseDevice {
public:
    void do_something() override {
        std::cout << "Plugin2 doing something" << std::endl;
    }

    void do_something_inner() override {
        std::cout << "Plugin1Device doing something inner!" << std::endl;
    }
};


// this contains do_something whose implementation is here itself