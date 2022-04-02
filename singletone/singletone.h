#ifndef SINGLETONE_H
#define SINGLETONE_H

class singletone {
   public:
    static singletone* createInstance();
    int getCount();

   private:
    singletone();

    static int instanceCount;
    static singletone* instancePtr;
};

#endif  // SINGLETONE_H
