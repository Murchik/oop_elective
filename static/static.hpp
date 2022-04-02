#ifndef STATIC_HPP
#define STATIC_HPP

class staticCount {
   public:
    staticCount();

    void printCount();
    static int getCount();
    // static int getSecondCount();

   private:
    static int count;
    // int secondCount;
};

#endif
