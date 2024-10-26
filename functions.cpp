#include <iostream>
#include <string>

using namespace std;

int add(int a, int b) {
    return a + b;
}

float multiply(float x, float y) {
    return x * y;
}

int getStringLength(string str) {
    return str.length();
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap function: num1 = " << a << ", num2 = " << b << endl;
}

int main() {
    int num1 = 5, num2 = 10;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << endl;

    float f1 = 2.5, f2 = 4.2;
    cout << "Product of " << f1 << " and " << f2 << " is: " << multiply(f1, f2) << endl;

    string name = "C++ Programming";
    cout << "Length of string \"" << name << "\" is: " << getStringLength(name) << endl;

    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1, num2);  // This swaps by value
    cout << "After swap in main: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

// =====================================================================================================

#include <iostream>
#include <string>
using namespace std;

void greet(){
    cout << "Hello, World!" << endl;
}

int multiply(int a, int b = 5){
    return (a * b);
}

int main(){
    greet();
    cout << multiply(5) << endl;
    cout << multiply(5, 6) << endl;
    
    return 0;
}

#include <iostream>

using namespace std;

void changeValue(int a){
    a = 9999;
}

void changeValue2(int &b){
    b = 49494;
}

int main(){
    int x = 5;
    cout << "The number before function call is: " << x << endl;
    changeValue(x);
    cout << "The number after function call is: " << x << endl;
    
    cout << "The number before function2 call is: " << x << endl;
    changeValue2(x);
    cout << "The number after function2 call is: " << x << endl;
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

void greet(){
    cout << "Hello, World!" << endl;
}

int multiply(int a, int b = 5){
    return (a * b);
}

int main(){
    greet();
    cout << multiply(5) << endl;
    cout << multiply(5, 6) << endl;
    
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int add(int a, int b){
    return a + b;
}

float add(float a, float b){
    return a + b;
}

string add(string a, string b){
    return a + b;
}

int main(){
    int a = 5;
    int b = 6;
    cout << add(a, b) << endl;
    
    float c = 4.14;
    float d = 3.1415926;
    cout << add(c, d) << endl;
    
    string e = "Hello, ";
    string f = "World";
    cout << add(e, f);
}

