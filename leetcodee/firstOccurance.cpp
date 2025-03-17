#include <iostream>
using namespace std;

// Function to find the first occurrence of target
int firstOccurrence(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    int result = -1; // Stores the first occurrence index

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;  // Found target, but continue searching left
            right = mid - 1;
        } 
        else if (arr[mid] < target)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }

    return result; // Returns -1 if not found
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 5}; // Sorted array with duplicates
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int result = firstOccurrence(arr, size, target);

    if (result != -1)
        cout << "First occurrence found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
