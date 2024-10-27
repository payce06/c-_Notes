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