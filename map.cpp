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