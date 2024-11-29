#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
using namespace std;

// Function to print a vector
void printVector(const vector<int> &v){
    for(int val : v){
        cout << val << " ";
    }
    cout << endl;
}

// Function to print a set
void printSet(const set<int> &s){
    for(int val : s){
        cout << val << " " << endl;
    }
    cout << endl;
}