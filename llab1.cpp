#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int newArr[6];  // New array to hold the result with the new element

    int newElement;
    cout << "Enter the new element to insert at the middle: ";
    cin >> newElement;

    // Copy elements up to the middle position (index 2)
    for (int i = 0; i < 2; ++i) {
        newArr[i] = arr[i];
    }


    newArr[2] = newElement;

    
    for (int i = 2; i < 5; ++i) {
        newArr[i + 1] = arr[i];
    }

    cout << "Array after insertion: ";
    for (int i = 0; i < 6; ++i) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}

