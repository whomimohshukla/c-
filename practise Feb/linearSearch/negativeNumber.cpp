#include <iostream>
using namespace std;

int main() {
    int arr[] = {-1, 2, 4, 5, 6, -2};
    int start = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int end = size - 1;

    while (start < end) {
        // Move start forward if already negative
        while (arr[start] < 0 && start < end) {
            start++;
        }

        // Move end backward if already positive
        while (arr[end] > 0 && start < end) {
            end--;
        }

        // Swap positive start with negative end
        if (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    // Print the result
    cout << "Array after moving negatives to the left: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
