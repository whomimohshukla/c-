#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int key, int start, int end) {
    if (start > end) {
        return -1; // Element is not found
    }

    int mid = (start + end) / 2;

    if (arr[mid] == key) {
        return mid; // Element is found
    }

    if (arr[mid] > key) {
        return binarySearch(arr, key, start, mid - 1); // Search in the left half
    } else {
        return binarySearch(arr, key, mid + 1, end); // Search in the right half
    }
}

int main() {
    vector<int> arr {1, 2, 4, 5, 7, 8, 9};
    int key = 5;

    int index = binarySearch(arr, key, 0, arr.size() - 1);

    if (index != -1) {
        cout << "Element is present at index " << index << endl;
    } else {
        cout << "Element is not present in the array" << endl;
    }

    return 0;
}
