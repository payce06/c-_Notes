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