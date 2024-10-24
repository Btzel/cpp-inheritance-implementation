#ifndef SEDAN_H
#define SEDAN_H
#include "Car.h"
#include <string>
class Sedan : public Car{
    public:
        Sedan();
        ~Sedan();
        void setNumDoors(int numDoors);
        int getNumDoors();
        void setIsCompact(bool isCompact);
        bool getIsCompact();
        friend std::ostream &operator<<(std::ostream &outs, const Sedan &s);
    private:
        int _numDoors;
        bool _isCompact;
};
#endif