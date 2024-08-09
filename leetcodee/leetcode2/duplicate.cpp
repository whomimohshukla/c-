#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& arr) {
    while (arr[0] != arr[arr[0]]) {
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}

int main() {
    vector<int> arr{1, 3, 4, 2, 2};  // Example array with one duplicate number

    int ans = findDuplicate(arr);
    cout << "Duplicate number: " << ans << endl;

    return 0;
}
