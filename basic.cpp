#include <iostream>
#include <string>

using namespace std;

int main(){
    int num1 = 5;
    float num2 = 3.14;
    double num3 = 3.1415926;
    char char1 = 'T';
    string string1 = "Hello";
    bool isBaseballTeam = true;
    
    const int num11 = 5;
    const float num22 = 4.567;
    const double num33 = 4.567938434;
    const char char11 = 'S';
    const string string11 = "Hola";
    const bool isStudent = false;
    
    
    
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    cout << "Hello World" << endl;
    cout << "This is c++";
    cout << "Programming if fun" << endl;
    cout << endl;
    int a =  5;
    cout << "The value of `a` is: " << a << endl;
    int b = 6;
    cout << "The value of `b` is: "  << b << "." << endl;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    cout << "Hello, what is your name?" << endl;
    cin >> name;
    cout << "Hi, " << name << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main(){
    int num;
    num = 0;
    
    int num1, num2;
    
    cout << "Enter two numbers." << endl;
    cin >> num1 >> num2;
    int sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " = " << sum << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    
    int age;
    cout << "Please enter your age." << endl;
    cin >> age;
    if(age < 21){
        cout << "You cannot drink." << endl;
    } else {
        cout << "You can drink." << endl;
    }
    
    int score;
    cout << "Please enter your score." << endl;
    cin >> score;
    if(score < 70){
        cout << "You failed" << endl;
    } else if(score >= 70 && score < 80){
        cout << "You got a C. STUDY MORE!" << endl;
    } else if(score >= 80 && score < 90){
        cout << "You got a B. NOT STUDYING ENOUGH!" << endl;
    } else if(score >= 90 && score < 95){
        cout << "You got an A-. You are studying better." << endl;
    } else {
        cout << "Congrats you got an A. Good job studying.." << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    
    for(int i = 0; i < 5; i++){
        cout << i << endl;
    }
    
    cout << endl;
    
    int j = 0;
    while(j < 5){
        cout << j << endl;
        j++;
    }
    
    
    return 0;
}

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