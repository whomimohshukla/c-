#include <iostream>
using namespace std;

// Iterative Binary Search
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevent overflow

        if (arr[mid] == target)
            return mid; // Target found
        else if (arr[mid] < target)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 15, 18}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
