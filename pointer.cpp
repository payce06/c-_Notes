#include <iostream>
using namespace std;
// p is a pointer to an int and stores the memory address of a.
// *p (dereferencing) gives the value at the address stored in p.

int main() {
   
    int a = 10;    // Normal integer variable
    int* p = &a;   // p is a pointer to an integer a.
    
   
    cout << "Value of a: " << a << endl;
    cout << "Memory address of a: " << &a << endl;
    cout << "Pointer p stores: " << p << endl;
    cout << "Value pointed by p: " << *p << endl;
   
    return 0;
}

// Pointers
#include <iostream>
using namespace std;


int main() {
   
   
    // Each integer is 4 bytes
    // This array is storing 16 bytes in total
    int arr[4] = {1, 2, 3, 4};
    cout << "The address of the first element: " << &arr[0] << endl;
    cout << "The address of the second element: " << &arr[1] << endl;
    cout << "The address of the third element: " << &arr[2] << endl;
    cout << "The address of the foruth element: " << &arr[3] << endl;
   
    // Now notice how if I just want to see the address of array and it gives me the address
    // of the first element because thats where the array starts from
    cout << "The address of the array is the address of the first element in the array: " << &arr << endl;
   
   int *p = arr; // Remember for array, we don't need & to get the address. The variable itself
    // an address
   
    // Another way of printing values in an array with the help of pointer
    for (int i = 0; i < 4; i++) {
        cout << "Address: " << (p + i) << " ||| ";
        cout << "Value in the address: " << *(p + i) << endl;
    }
   
   
   
    return 0;
}

#include <iostream>
using namespace std;



int main()
{
    int a = 5;
    int* p = &a;
    int** pp = &p;
   
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "============================" << endl << endl;
   
    cout << "Address stored by p: " << p << endl;
    cout << "Address of p itself: " << &p << endl;
    cout << "Value pointed by p: " << *p << endl;
    cout << "============================" << endl << endl;
   
    cout << "Address stored by pp: " << pp << endl;
    cout << "Address of pp itself: " << &pp << endl;
    cout << "Final value pointed by pp: " << **pp << endl;
    cout << "============================" << endl << endl;
   

    return 0;
}

// Passing pointers to variables in function
#include <iostream>
using namespace std;

// Passing by value
// int val = a;
void increment1(int val) {
    val = val + 1;
}


// Passing by pointer
// int* ptr = &a;
void increment2(int *ptr) {
    *ptr = *ptr + 1;
}


int main()
{

    int a = 5;
    cout << "Value of a before the first increment: " << a << endl;
    increment1(a);
    cout << "Value of a after the first increment: " << a << endl;
   
   
    cout << endl << endl;
    cout << "Value of a before the second increment: " << a << endl;
    increment2(&a);
    cout << "Value of a after the first increment: " << a << endl;
   


    return 0;
}

cout << "pointer.cpp ===============================================================" << endl;

// Passing pointers to arrays
#include <iostream>
using namespace std;

// Passing array normally
void printArray1(int arr[], int length) {
    for(int i = 0; i < length; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
}


// Passing array with pointers (almost the same)
void printArray2(int* arr, int length) {
    for(int i = 0; i < length; i++){
        cout << arr[i] << endl;
    }
    cout << endl;
}


int main(){
    int array1[5] = {5, 7, 2, 8, 3};
    int length = sizeof(array1) / sizeof(array1[0]);
    printArray1(array1, length);
    printArray2(array1, length);
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
