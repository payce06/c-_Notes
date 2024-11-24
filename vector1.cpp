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
