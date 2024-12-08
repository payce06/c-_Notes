#include <iostream>
using namespace std;

class Animal{
    public:
    void eating(){
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
    public:
    void barking(){
        cout << "Barking..." << endl;
    }
};

int main(){
    Dog d;
    d.eating();
    d.barking();
    return 0;
}

#include <iostream>
using namespace std;

class Animal{
    public:
    void eating(){
        cout << "Eating..." << endl;
    }
};

class Bird{
    public:
    void flying(){
        cout << "Flying..." << endl;
    }
};

class Duck : public Animal, public Bird{
    public:
    void quacking(){
        cout << "Quacking..." << endl;
    }
};

int main(){
    Duck d;
    d.eating();
    d.flying();
    d.quacking();
}

#include <iostream>
using namespace std;

class Animals{
    public:
    void eat(){
        cout << "Eating..." << endl;
    }
};

class Mammals : public Animals {
    public:
    void walk(){
        cout << "Walking..." << endl;
    }
};

class Dog : public Mammals{
    public:
    void barking(){
        cout << "Barking..." << endl;
    }
};

int main(){
        Dog d;
        d.eat();
        d.walk();
        d.barking();
}

#include <iostream>
using namespace std;

class Animal{
    public:
    void eating(){
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Barking..." << endl;
    }
};

class Cat : public Animal{
    public:
    void meow(){
        cout << "Meowing..." << endl;
    }
};

int main(){
    Dog d;
    d.eating();
    d.bark();
    
    Cat c;
    c.eating();
    c.meow();
}

#include <iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Eating..." << endl;
    }
};

class Bird{
    public:
    void fly(){
        cout << "Flying..." << endl;
    }
};

class Mammal{
    public:
    void walk(){
        cout << "Walking..." << endl;
    }
};

class Bat : public Animal, public Bird, public Mammal {
    public:
    void screech(){
        cout << "Screeching..." << endl;
    }
};

int main(){
    Bat b;
    b.eat();
    b.fly();
    b.walk();
    b.screech();
}

#include <iostream>
using namespace std;

class Animal{
    public:
    Animal(){
        cout << "Animal Constructor" << endl;
    }
    ~Animal(){
        cout << "Animal Deconstrcutor" << endl;
    }
};

class Dog : public Animal{
    public:
    Dog(){
        cout << "Dog Constructor" << endl;
    }
    ~Dog(){
        cout << "Dog Deconstructor" << endl;
    }
};

int main(){
    Dog d;
}

#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle {
private:
    string brand;
    int year;

public:
    // Constructor
    // I could have done brand = b; year = y; or even better: this->brand = b; this->year = y;
    // Below is the shortcut format of this: brand(b); year(y);
    Vehicle(string b, int y) : brand(b), year(y) {
    }

    // Method to display vehicle info
    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

// Derived class 1
class Car : public Vehicle {
private:
    int doors;

public:
    // Constructor
    // Vehicle(b, y) creates a parent object. Since it inherits from Vehicle class,
    // this has to be called.
    // doors(d) is same as doors = d;
    Car(string b, int y, int d) : Vehicle(b, y), doors(d) {
    }

    // Method to display car info
    void displayCarInfo() {
        // Parent's function called.
        displayInfo();
        cout << "Doors: " << doors << endl;
    }
};

// Derived class 2
class Motorcycle : public Vehicle {
private:
    bool hasSidecar;

public:
    // Constructor
    Motorcycle(string b, int y, bool h) : Vehicle(b, y), hasSidecar(h) {
    }

    // Method to display motorcycle info
    void displayMotorcycleInfo() {
        displayInfo();
        cout << "Has Sidecar: " << (hasSidecar ? "Yes" : "No") << endl;
    }
};

// Derived class 3 (from Car)
class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    // Constructor
    ElectricCar(string b, int y, int d, int bc) : Car(b, y, d), batteryCapacity(bc) {
    }