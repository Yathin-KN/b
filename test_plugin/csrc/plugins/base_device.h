#pragma once

#include <iostream>
#include <string>

class BaseDevice {
public:
    virtual void do_something() = 0;
    virtual void do_something_inner() = 0;  
    virtual ~BaseDevice() = default;
};
