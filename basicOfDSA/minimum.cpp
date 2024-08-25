#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = 10;
    int mini = INT_MAX; // Initialize to the maximum possible value

    for (int i = 0; i < size; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }

    cout << "Minimum element in the array is " << mini << endl;

    return 0;
}
