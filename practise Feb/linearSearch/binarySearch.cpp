#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2; // Update mid in each iteration
        int element = arr[mid];

        if (element == target) {
            return mid; // Target found, return index
        } else if (target < element) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {2, 3, 6, 8, 10, 12, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2; // Target element

    int index_target = binarySearch(arr, size, target);

    if (index_target == -1) {
        cout << "Target not found" << endl;
    } else {
        cout << "Target element found at index: " << index_target << endl;
    }

    return 0;
}
