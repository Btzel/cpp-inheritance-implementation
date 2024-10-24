#include <iostream>
#include "Truck.h"
#include "Sedan.h"
#include "Suv.h"

int main(){ 
    Truck truck;
    Sedan sedan;
    Suv suv;
    
    truck.setFuel(12);
    truck.setPaint("Magenta");
    truck.setMileage(17002);
    truck.setBedLength(100);
    truck.setIsFullCab(true);

    sedan.setFuel(100);
    sedan.setPaint("Grey");
    sedan.setMileage(100000);
    sedan.setNumDoors(2);
    sedan.setIsCompact(true);

    suv.setFuel(1000);
    suv.setPaint("Blue");
    suv.setMileage(3000);
    suv.setSeats(8);
    suv.setIsAWD(true);

    std::cout << truck << std::endl;
    std::cout << sedan << std::endl;
    std::cout << suv << std::endl;

    return 0;
}



