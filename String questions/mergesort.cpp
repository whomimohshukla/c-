#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int end) {
    int mid = start + (end - start) / 2;

    int length1 = mid - start + 1;
    int length2 = end - mid;

    int *left = new int[length1];
    int *right = new int[length2];

    // Copying the values
    int k = start;
    for (int i = 0; i < length1; i++) {
        left[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < length2; i++) {
        right[i] = arr[k++];
    }

    // Merge logic
    int leftIndex = 0, rightIndex = 0, mainIndex = start;

    while (leftIndex < length1 && rightIndex < length2) {
        if (left[leftIndex] < right[rightIndex]) {
            arr[mainIndex++] = left[leftIndex++];
        } else {
            arr[mainIndex++] = right[rightIndex++];
        }
    }

    // Copy remaining elements
    while (leftIndex < length1) {
        arr[mainIndex++] = left[leftIndex++];
    }
    while (rightIndex < length2) {
        arr[mainIndex++] = right[rightIndex++];
    }

    // Free allocated memory
    delete[] left;
    delete[] right;
}

// Function to print a vector
void printVector(const vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

void mergeSort(vector<int> &arr, int start, int end) {
    // Base case
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;

    // Left side sort
    mergeSort(arr, start, mid);

    // Right side sort
    mergeSort(arr, mid + 1, end);

    // Merge the sorted halves
    merge(arr, start, end);
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();

    cout << "Given vector is:\n";
    printVector(arr);

    mergeSort(arr, 0, n - 1);

    cout << "\nSorted vector is:\n";
    printVector(arr);

    return 0;
}
