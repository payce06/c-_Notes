// Passing pointers to arrays
#include <iostream>
#include <string>
using namespace std;


class Car {
   
    private:
        int speed = 0;
   
   
    public:
        string brand;
        
        void vroom(){
            cout << "Vroom Vroom" << endl;
        }
        
        void printBrand(){
            cout << "The brand is: " << brand << endl;
        }
        
        void increaseSpeed(int increment){
            speed = speed + increment;
        }
        
        void printSpeed(){
            cout << "The speed is: " << speed << endl;
        }
       
};

int main()
{
    Car myCar;
    myCar.brand = "Toyota";
    myCar.printBrand();
    myCar.printSpeed();
    myCar.increaseSpeed(10);
    myCar.printSpeed();
    myCar.vroom();
    return 0;
}

#include <iostream>
using namespace std;


// Basic syntax of a class
class ClassName{
    // Public members
    public:
        void publicOutput(){
            cout << "void" << endl;
        }
        
    private:
        int privateOutput;
        
};

int main(){
    ClassName myClass;
    myClass.publicOutput();
    return 0;
}
    