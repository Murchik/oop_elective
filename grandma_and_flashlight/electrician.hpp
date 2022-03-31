#ifndef ELECTRICIAN_HPP
#define ELECTRICIAN_HPP

#include <map>

#include "IChair.hpp"
#include "ILightable.hpp"
#include "IRepairable.hpp"

class electrician {
   public:
    electrician() = default;
    electrician(int height) : _height(height) {}
    electrician(std::map<ILightable*, IRepairable*> manual) : _manual(manual) {}
    electrician(int height, std::map<ILightable*, IRepairable*> manual)
        : _height(height), _manual(manual) {}

    bool repair(ILightable* flashlight);
    void take_chair(IChair* chair);

   private:
    int _height = 170;
    std::map<ILightable*, IRepairable*> _manual;
};

#endif
