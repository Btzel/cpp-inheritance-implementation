#include "Sedan.h"

Sedan::Sedan(){
    std::cout << "We are in Sedan constructor" << std::endl;
    _numDoors = 4;
    _isCompact = false; 
}

Sedan::~Sedan(){
    std::cout << "We are in Sedan destructor" << std::endl;
}

void Sedan::setNumDoors(int numDoors){
    _numDoors = numDoors;
}

int Sedan::getNumDoors(){
    return _numDoors;
}

void Sedan::setIsCompact(bool isCompact){
    _isCompact = isCompact;
}

bool Sedan::getIsCompact(){
    return _isCompact;
}

std::ostream &operator<<(std::ostream &outs, const Sedan &s){
    outs << "Sedan Info: " << std::endl;
    outs << "Paint Color: " << s._paintColor << std::endl;
    outs << "Fuel: " << s._fuel << std::endl;
    outs << "Mileage: " << s._mileage << std::endl;
    outs << "Number of Door: " << s._numDoors << std::endl;
    outs << "Is Compact: " << s._isCompact << std::endl; 
    std::cout << std::endl;
    return outs;
}