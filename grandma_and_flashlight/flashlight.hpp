#ifndef FLASHLIGHT_HPP
#define FLASHLIGHT_HPP

// #include <iostream>

#include "ILightable.hpp"
#include "IRepairable.hpp"

class flashlight : public ILightable, public IRepairable {
   public:
    flashlight() = default;
    flashlight(int height) : _height(height) {}
    flashlight(bool works) : _works(works) {}
    flashlight(int height, bool works) : _height(height), _works(works) {}

    virtual int height() override;
    virtual bool turn_on() override;
    virtual bool repair() override;

   private:
    int _height = 190;
    bool _works = false;
};

#endif
