#include "Suv.h"

Suv::Suv(){
    std::cout << "We are in Suv constructor" << std::endl;
    _numSeats = 5;
    _isAWD = false;
}

Suv::~Suv(){
    std::cout << "We are in Suv destructor" << std::endl;
}

void Suv::setSeats(int numSeats){
    _numSeats = numSeats;
}

int Suv::getSeats(){
    return _numSeats;
}

void Suv::setIsAWD(bool isAWD){
    _isAWD = isAWD;
}

bool Suv::getIsAWD(){
    return _isAWD;
}

std::ostream &operator<<(std::ostream &outs, const Suv &s){
    outs << "Suv Info: " << std::endl;
    outs << "Paint Color: " << s._paintColor << std::endl;
    outs << "Fuel: " << s._fuel << std::endl;
    outs << "Mileage: " << s._mileage << std::endl;
    outs << "Number of Seat: " << s._numSeats << std::endl;
    outs << "Is AWD: " << s._isAWD << std::endl; 
    std::cout << std::endl;
    return outs;
}