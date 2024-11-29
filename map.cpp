#include <iostream>
#include <map>
#include <string>
using namespace std;

// Function to print the map
void printMap(map<string, int> m, string message){
    cout << "After " << message << ": " << endl;
    for(auto entry : m){
        cout << entry.first << ":" << entry.second << endl;
    }
    cout << endl;
}

int main() {
    // Declare and initialize a map
    map<string, int> m ={
        {"Apples", 5},
        {"Banana", 3},
        {"Cherry", 4}
    };

    // Size and Empty Check
    cout << "Size: " << m.size()<< endl;
    cout << "Is map empty: " << (m.empty() ? "Yes": "No");
