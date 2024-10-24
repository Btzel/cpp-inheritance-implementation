#ifndef SUV_H
#define SUV_H
#include "Car.h"

class Suv : public Car{
    public:
        Suv();
        ~Suv();
        void setSeats(int numSeats);
        int getSeats();
        void setIsAWD(bool isAWD);
        bool getIsAWD();
        friend std::ostream &operator<<(std::ostream &outs, const Suv &s);
    private:
        int _numSeats;
        bool _isAWD;
};


#endif