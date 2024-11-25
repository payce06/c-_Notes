#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// printVector
void printVector(vector<int> v1, string methodName) {
    cout << "After the method: " << methodName << endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vector1 = {1, 3, 2, 4};
   
    // front
    // See the element at the 0 index
    cout << "Front: " << vector1.front() << endl;
   
    // back
    // See the element at the length - 1 index
    cout << "Back: " << vector1.back() << endl;
   
    // empty
    // Check if the vector is empty. Returns 1 for empty and 0 for non-empty
    cout << "Is Empty: " << vector1.empty() << endl;