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
}