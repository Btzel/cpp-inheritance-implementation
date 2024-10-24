#ifndef TRUCK_H
#define TRUCK_H
#include <string>
#include "Car.h"

class Truck : public Car{
    public:
        Truck();
        ~Truck();
        void setBedLength(int bedLength);
        int getBedLength();
        void setIsFullCab(bool isFullCab);
        bool getIsFullCab();
        friend std::ostream &operator<<(std::ostream &outs, const Truck &t);
    private:
        int _bedLength;
        bool _isFullCab;
};
#endif