#ifndef GRANDMA_HPP
#define GRANDMA_HPP

#include "IChair.hpp"
#include "ILightable.hpp"
#include "electrician.hpp"
#include "log.hpp"

class grandma {
   public:
    grandma(ILightable* fl, IChair* ch, electrician* e)
        : _flashlight(fl), _chair(ch), _electrician(e) {}

    void turn_on_lights();

   protected:
    IChair* give_chair();

   private:
    ILightable* _flashlight = nullptr;
    IChair* _chair = nullptr;
    electrician* _electrician = nullptr;
};

#endif
