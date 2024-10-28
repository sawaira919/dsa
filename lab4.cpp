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

    // Initialize min and max with the first element
    int maxVal = arr[0];
    int minVal = arr[0];

    // Find min and max
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxVal) 
		{
		
		maxVal = arr[i];
		}
		
        if (arr[i] < minVal)
			{
		 minVal = arr[i];
		 }
    }

    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}

