#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = 10;
    int maxi = INT_MAX; // Initialize to the maximum possible value

    for (int i = 0; i < size; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    cout << "maxi element in the array is " << maxi << endl;

    return 0;
}
