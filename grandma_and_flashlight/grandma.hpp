#ifndef GRANDMA_HPP
#define GRANDMA_HPP

#include "ILightable.hpp"
#include "chair.hpp"
#include "electrician.hpp"
#include "log.hpp"

class grandma {
   public:
    grandma(ILightable* flashlight, IChair* chair)
        : _flashlight(flashlight), _chair(chair) {
        _electrician = new electrician();
    }
    ~grandma() { delete _electrician; }

    void turn_on_lights();

   protected:
    IChair* give_chair();

   private:
    ILightable* _flashlight = nullptr;
    electrician* _electrician = nullptr;
    IChair* _chair = nullptr;
};

#endif
