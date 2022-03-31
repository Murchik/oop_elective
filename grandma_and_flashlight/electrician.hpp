#ifndef ELECTRICIAN_HPP
#define ELECTRICIAN_HPP

#include "IChair.hpp"
#include "IRepairable.hpp"

class electrician {
   public:
    electrician() = default;
    electrician(int height) : _height(height) {}

    bool repair(IRepairable* flashlight);
    void take_chair(IChair* chair);

   private:
    int _height = 170;
};

#endif
