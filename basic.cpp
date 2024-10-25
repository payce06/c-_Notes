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