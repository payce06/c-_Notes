int main() {
   
    // Declaring an array of 5 integers
    int numbers1[5];
   
   
    // Declaring and initializing at the same time
    int numbers2[5] = {1, 2, 3, 4, 5};
   
    // Declaring and partially initializing
    int numbers3[5] = {1, 2}; // Remaining values are all set to 0
   
   
    // I can even initializae the array without specifying size
    int numbers4[] = {1, 2, 3, 4, 5, 6}; // C++ is automatically going to identify the size should be 6
   
   
    // Accessing array elements
    int numbers5[5] = {10, 20, 30, 40, 50};
    cout << "First element " << numbers5[0] << endl;
    cout << "Second element " << numbers5[1] << endl;
    cout << "Third element " << numbers5[2] << endl;
   
    // What if I want to change the value of array at index 2?
    numbers5[2] = 500;
   
   
   
    // Looping through the array
    int numbers6[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int length = sizeof(numbers6) / sizeof(numbers6[0]);
    // Essentially this is saying size = 40 / 4 = 10 -> This is the number of elements
    for (int i = 0; i < length; i++) {
        cout << "Element at index " << i << " is " << numbers6[i] << endl;
    }    
   
}

#include <iostream>
#include <string>
using namespace std;

int main() {
   
    // Declaration and initialization of a 2D (multidimensional array)
    // Create a 3 x 3 array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
   
   
    // Access the first list 2nd index
    cout << matrix[0][2] << endl;
   
    // Access the last list last index
    cout << matrix[2][2] << endl;
   
   
    cout << "===========================" << endl;
   
   
    // Loop through the 2D array that is of size 3 x 3
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
   
    return 0;
}

#include <iostream>
using namespace std;

int calculateSum(int array[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += array[i];
    }
    return sum;
}

int main(){
    int array[5] = {5, 7, 2, 4, 9};
    int length = sizeof(array) / sizeof(array[0]);
    int sum = calculateSum(array, length);
    cout << "The sum of the array:" << sum << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
   
    // Declaration and initialization of a 2D (multidimensional array)
    // Create a 3 x 3 array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
   
   
    // Access the first list 2nd index
    cout << matrix[0][2] << endl;
   
    // Access the last list last index
    cout << matrix[2][2] << endl;
   
   
    // Loop through the 2D array that is of size 3 x 3
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
   
    return 0;
}

#include <iostream>
using namespace std;

int calculateSum(int array[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += array[i];
    }
    return sum;
}

int main(){
    int array[5] = {5, 7, 2, 4, 9};
    int length = sizeof(array) / sizeof(array[0]);
    int sum = calculateSum(array, length);
    cout << "The sum of the array:" << sum << endl;
    return 0;
}

// Find if the target exists in an array
#include <iostream>
using namespace std;

bool isTargetFound(int array[], int length, int target){
    for(int i = 0; i < length; i++){
        if(array[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int array1[5] = {1, 2, 3, 4, 5};
    int length = sizeof(array1) / sizeof(array1[0]);
    const int target = 5;
    
    if(isTargetFound(array1, length, target) == true){
        cout << "Target Found" << endl;
    } else {
        cout << "Target Not Found" << endl;
    }


    return 0;
}

// Find the min and max of an array
#include <iostream>
using namespace std;

int findMin(int arr[], int length){
    int currMin = arr[0];
    for(int i = 0; i < length; i++){
        if(arr[i] < currMin){
            currMin = arr[i];
        }
    }
    return currMin;
}

int findMax(int arr[], int length){
    int currMax = arr[0];
    for(int i = 0; i < length; i++){
        if(arr[i] > currMax){
            currMax = arr[i];
        }
    }
    return currMax;
}
    
int main(){
    int array1[5] = {5, 2, 8, 9, 6};
    int length = sizeof(array1) / sizeof(array1[0]);
    cout << "The min: " << findMin(array1, length) << endl;
    cout << "The max: " << findMax(array1, length) << endl;
    
    return 0;
}

// Find the average of the array
#include <iostream>
using namespace std;

float findAverage(int arr[], int length){
    float sum = 0;
    for(int i = 0; i < length; i++){
        sum += arr[i];
    }
    return sum / length;
}

int main(){
    int array3[3] = {1, 2, 4};
    int length = sizeof(array3) / sizeof(array3[0]);
    
    cout << "The average of the array: " << findAverage(array3, length);
    
    return 0;
}