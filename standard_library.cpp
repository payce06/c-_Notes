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

    // 7. Resize a vector
    vector<int> vec6 = {4, 3, 7, 3};
    vec6.resize(5, -1);
    printVector(vec6);

    // 8. Remove an element at a specific position
    vector<int> vec7 = {10, 20, 30, 40};
    vec7.erase(vec7.begin()+2);
    printVector(vec7);

    // 9. Clear a vector
    vector<int> vec8 = {7, 2, 9, 3};
    vec8.clear();
    cout<< "Vector 8 cleared: " << vec8.size() << endl;

    // 10. Access first and last elements
    vector<int> vec9 = {7, 2, 3, 8};
    cout << "First: " << vec9.front() << "Back: " << vec9.back() << endl;

        // *** Set Answers ***

    // 1. Insert elements into a set
    set<int> set1 = {5, 2, 7};
    set1.insert(4);
    printSet(set1);

    // 2. Check size and emptiness
   cout << "Size: " << set1.size() << endl;
   cout << "Is empty? " << (set1.empty() ? "Yes" : "No");
   
    // 3. Erase an element
    set1.erase(2);
    printSet(set1);

    // 4. Find an element
    if(set1.find(3) != set1.end()){
        cout << "3 is found. " << endl;
    } else {
        cout << "3 is not found. " << endl;
    }

    // 5. Clear a set
    set1.clear();
    cout << "After clear, size: " << set1.size() << endl;

    // 6. Insert duplicates in multiset
    multiset<int> mset1 = {5, 2, 6, 2};
    mset1.insert(3);
    for(int val : mset1){
        cout << val << " " << endl;
    }
    cout<< endl;

    // 7. Erase all occurrences of an element in a multiset
    mset1.erase(1);
    for(int val : mset1){
        cout << val << " " << endl;
    }
    cout << endl;

    // 8. Iterate through a set
    set <int> set2 = {3, 7, 2, 8};
    for(int val : set2){
        cout << val << " " << endl;
    }
    cout << endl;

    // 9. Check for a duplicate element in a set
    set<int> set3 = {5, 2, 8, 0};
    set3.insert(8);
    printSet(set3);

    // 10. Print the smallest element in the set
    cout << "Smallest item: " << *set3.begin() << endl;

    // *** Map Answers ***

    // 1. Initialize and print a map
    map<string, int> map1 = {{"Banana", 5}, {"Apple", 8}};
    printMap(map1);

     // 2. Insert elements
    map1["Cherry"] = 7;
    map1.insert({"Cherry", 6});
    printMap(map1);

    // 3. Access and modify elements
    cout << "Value of 'Banana': " << map1["Banana"] << endl;
    map1["Banana"] = 4;
    printMap(map1);

    // 4. Check for existence of a key
    if(map1.find("Apple") != map1.end()){
        cout << "'Apple' exists in the map.";
    } else {
        cout << "'Apple' does not exist in the map";
    }
    cout << endl;

    // 5. Erase an element by key
    map1.erase("Banana");
    printMap(map1);