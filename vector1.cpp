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

        // size
    // Gives the size of the vector
    cout << "Size: " << vector1.size() << endl;
   
    // sort
    // Sorts a vector. You will have to include <algorithm>
    sort(vector1.begin(), vector1.end());
    printVector(vector1, "sort");
   
    // reverse
    // Reverse a vector
    reverse(vector1.begin(), vector1.end());
    printVector(vector1, "reverse");
   
    // push_back
    // Adds the number 5 to the end of the vector
    vector1.push_back(5);
    printVector(vector1, "push_back");

    // pop_back
    // Removes the last number at the end of the vector
    vector1.pop_back();
    printVector(vector1, "pop_back");
   
    // insert
    // Inserts a number 10 at index 2
    vector1.insert(vector1.begin() + 2, 10);
    printVector(vector1, "insert");
   
    // erase
    // Remove the element at index 0
    vector1.erase(vector1.begin()+0);
    printVector(vector1, "erase");
   
    // resize
    // Resize the vector to 10 elements. The missing/remaining elements initialized to 0.
    vector1.resize(10, 0);
    printVector(vector1, "resize");

    // clear
    // Removes all elements
    vector1.clear();
    printVector(vector1, "clear");
   
   
    // Lastly, lets learn about 2D Vectors
    vector<vector<int>> vector2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 0}
    };
   
   
    // Looping through the 2D vector
    for (int i = 0; i < vector2.size(); i++) {
        for (int j = 0 ; j < vector2[i].size(); j++) {
            cout << vector2[i][j] << " ";
        }
        cout << endl;
    }

       return 0;
}

#include <iostream>
#include <set>
#include <string>
using namespace std;

// printSet
void printSet(set<int> s, string methodName) {
    cout << "After the method: " << methodName << endl;
    // This is another way of doing for loop for STL containers
    // STL Containers - vectors, set, etc.
    for (int val : s) {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    // Initialize a set with some elements
    set<int> set1 = {4, 2, 3, 1};
   
    // size
    // Get the size of the set
    cout << "Size: " << set1.size() << endl;
   
    // empty
    // Check if the set is empty
    cout << "Is Empty: " << set1.empty() << endl;
   
    // insert
    // Insert elements into the set
    set1.insert(5);
    printSet(set1, "insert(5)");
   

