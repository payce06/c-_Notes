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

// 2. Size and empty check
    cout << "Size: " << vec1.size() << endl;
    cout << "Is Empty: " << (vec1.empty() ? "Yes" : "No");

    // 3. Insert an element
    vector<int> vec2 = {4, 6, 3};
    vec2.insert(vec2.begin() +1, 10);
    printVector(vec2);

    // 4. Reverse a vector
    vector<int> vec3 = {4, 2, 7, 3};
    reverse(vec3.begin(), vec3.end());
    printVector(vec3);

    // 5. Remove the last element
    vector<int> vec4 = {3, 6, 1};
    vec4.pop_back();
    printVector(vec4);

    // 6. Create a vector of size 5 initialized to 100
    vector<int> vec5 = {5, 100};
    printVector(vec5);