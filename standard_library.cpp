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
// Function to print a map
void printMap(const map<string, int> &m){
    for(const auto &entry: m){
        cout << entry.first << ":" << entry.second << endl;
    }
    cout << endl;
}

int main() {
    // *** Vector Answers ***

    // 1. Sort a vector
    vector<int> vec1 = {8, 5, 7, 3};
    sort(vec1.begin(), vec1.end());
    printVector(vec1);
