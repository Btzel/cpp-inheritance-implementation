#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>

class Car{
    public:
        Car();
        ~Car();
        int getFuel();
        void setFuel(int fuel);
        std::string getPaint();
        void setPaint(std::string color);
        float getMileage();
        void setMileage(float mileage);
    protected:
        int _fuel;
        std::string _paintColor;
        float _mileage;
};

#endif