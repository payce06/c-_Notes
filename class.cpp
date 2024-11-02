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