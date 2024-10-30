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
   