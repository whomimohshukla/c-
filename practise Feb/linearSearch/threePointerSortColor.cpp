#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int low = 0, medium = 0, end = size - 1;

    while (medium <= end) {
        if (arr[medium] == 0) {
            swap(arr[low], arr[medium]);
            low++;
            medium++;
        } else if (arr[medium] == 1) {
            medium++;
        } else {
            swap(arr[medium], arr[end]);
            end--;
        }
    }

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

