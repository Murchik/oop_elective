#ifndef IREPAIRABLE_HPP
#define IREPAIRABLE_HPP

class IRepairable {
   public:
    virtual bool repair() = 0;
    virtual int height() = 0;
};

#endif
