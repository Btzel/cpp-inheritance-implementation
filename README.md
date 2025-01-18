# C++ Inheritance Implementation

A practical demonstration of inheritance in C++ using a vehicle class hierarchy.

![C++](https://img.shields.io/badge/C%2B%2B-17-blue)
![License](https://img.shields.io/badge/license-MIT-green)

## 📋 Overview

This project demonstrates object-oriented programming concepts in C++, specifically focusing on inheritance. It implements a vehicle class hierarchy with a base `Car` class and derived classes for specific vehicle types.

![Class Hierarchy](https://github.com/user-attachments/assets/3d5b83d8-1ac2-4b45-ab7a-982598c96162)

## 🏗️ Class Structure

### Base Class: Car
```cpp
class Car {
    protected:
        int _fuel;
        std::string _paintColor;
        float _mileage;
    
    public:
        // Getters and setters
        int getFuel();
        void setFuel(int fuel);
        // ... other methods
};
```

### Derived Classes
1. **Sedan**
   - Additional features:
     - Number of doors
     - Compact status
   ```cpp
   class Sedan : public Car {
       private:
           int _numDoors;
           bool _isCompact;
       // ... methods
   };
   ```

2. **SUV**
   - Additional features:
     - Number of seats
     - AWD status
   ```cpp
   class Suv : public Car {
       private:
           int _numSeats;
           bool _isAWD;
       // ... methods
   };
   ```

3. **Truck**
   - Additional features:
     - Bed length
     - Full cab status
   ```cpp
   class Truck : public Car {
       private:
           int _bedLength;
           bool _isFullCab;
       // ... methods
   };
   ```

## 🚀 Features

- Inheritance demonstration with multiple derived classes
- Constructor and destructor implementation
- Getter and setter methods
- Operator overloading (<<)
- Protected member variables
- Friend functions

## 📦 Implementation Details

### Common Base Features
- Fuel level tracking
- Paint color
- Mileage tracking

### Specific Class Features
- **Sedan**: Door configuration and size classification
- **SUV**: Seating capacity and drive type
- **Truck**: Cargo bed specifications and cab type

## 💻 Usage Example

```cpp
int main() {
    Truck truck;
    truck.setFuel(12);
    truck.setPaint("Magenta");
    truck.setMileage(17002);
    truck.setBedLength(100);
    truck.setIsFullCab(true);

    Sedan sedan;
    sedan.setFuel(100);
    sedan.setPaint("Grey");
    sedan.setMileage(100000);
    sedan.setNumDoors(2);
    sedan.setIsCompact(true);

    // Output using overloaded operator
    std::cout << truck << std::endl;
    std::cout << sedan << std::endl;
}
```

## 🛠️ Building the Project

1. Clone the repository
```bash
git clone https://github.com/Btzel/cpp-inheritance-implementation.git
cd cpp-inheritance-implementation
```

2. Compile the project
```bash
g++ -o vehicle_demo main.cpp Car.cpp Sedan.cpp Suv.cpp Truck.cpp
```

3. Run the executable
```bash
./vehicle_demo
```

## 📝 Project Structure
```
inheritance/
├── Car.h             # Base class header
├── Car.cpp           # Base class implementation
├── Sedan.h          # Sedan class header
├── Sedan.cpp        # Sedan class implementation
├── Suv.h            # SUV class header
├── Suv.cpp          # SUV class implementation
├── Truck.h          # Truck class header
├── Truck.cpp        # Truck class implementation
└── main.cpp         # Main program
```

## 🎓 Learning Outcomes

This project demonstrates:
- Class inheritance hierarchy
- Access modifiers (public, protected, private)
- Method overriding
- Operator overloading
- Memory management
- Object-oriented design principles

## 🤝 Contributing

Contributions are welcome! Feel free to submit pull requests.

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

This is a learning implementation for understanding C++ inheritance concepts.
