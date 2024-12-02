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