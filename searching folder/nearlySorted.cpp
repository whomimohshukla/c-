#include <iostream>
#include <vector>
using namespace std;

int nearlySortedArray(vector<int> arr, int target) {
    //this is the program of nearly sorted array
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check mid, mid-1, mid+1
        if (arr[mid] == target) {
            return mid;
        }
        if (mid - 1 >= start && arr[mid - 1] == target) {
            return mid - 1;
        }
        if (mid + 1 <= end && arr[mid + 1] == target) {
            return mid + 1;
        }

        // Update search boundaries
        if (arr[mid] < target) {
            start = mid + 2;
        } else {
            end = mid - 2;
        }
    }

    return -1;
}

int main() {
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 70;
    int ans = nearlySortedArray(arr, target);

    if (ans != -1) {
        cout << "Index of " << target << " is: " << ans << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }

    return 0;
}
