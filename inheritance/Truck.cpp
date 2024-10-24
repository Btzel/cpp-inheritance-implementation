#include "Truck.h"

Truck::Truck(){
    std::cout << "We are in Truck constructor" << std::endl;
    _bedLength = 6;
    _isFullCab = false;
}

Truck::~Truck(){
    std::cout << "We are in Truck destructor" << std::endl;
}

void Truck::setBedLength(int bedLength){
    _bedLength = bedLength;
}

int Truck::getBedLength(){
    return _bedLength;
}

void Truck::setIsFullCab(bool isFullCab){
    _isFullCab = isFullCab;
}

bool Truck::getIsFullCab(){
    return _isFullCab;
}

std::ostream &operator<<(std::ostream &outs, const Truck &t){
    outs << "Truck Info: " << std::endl;
    outs << "Paint Color: " << t._paintColor << std::endl;
    outs << "Fuel: " << t._fuel << std::endl;
    outs << "Mileage: " << t._mileage << std::endl;
    outs << "Bed Length: " << t._bedLength << std::endl;
    outs << "Is Full Cab: " << t._isFullCab << std::endl; 
    std::cout << std::endl;
    return outs;
}