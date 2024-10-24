#include "Car.h"
#include <iostream>

Car::Car(){
    std::cout << "We are in Car constructor" << std::endl;
    _fuel = 10;
    _paintColor = "Grey";
    _mileage = 0.0;
}

Car::~Car(){
    std::cout << "We are in Car destructor" << std::endl;
}

int Car::getFuel(){
    return _fuel;
}

void Car::setFuel(int fuel){
    _fuel = fuel; 
}

std::string Car::getPaint(){
    return _paintColor;
}

void Car::setPaint(std::string paintColor){
    _paintColor = paintColor;
}

float Car::getMileage(){
    return _mileage;
}

void Car::setMileage(float mileage){
    _mileage = mileage;
}