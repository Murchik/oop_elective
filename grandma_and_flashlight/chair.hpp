#ifndef CHAIR_HPP
#define CHAIR_HPP

#include "IChair.hpp"

class chair : public IChair {
   public:
    chair() = default;
    chair(int height) : _height(height) {}

    int height() override;

   private:
    int _height = 40;
};

#endif
