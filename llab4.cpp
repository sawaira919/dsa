#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate array
    int* arr = new int[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Initialize counters for even and odd numbers
    int evenCount = 0;
    int oddCount = 0;

    // Count even and odd numbers
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}

