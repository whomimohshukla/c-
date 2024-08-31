#include<iostream>
#include<vector>
using namespace std;

int houseRobbery(vector<int>& arr, int index) {
    if (index >= arr.size()) {
        return 0;
    }
    // Rob the current house and skip the next one
    int robAmt1 = arr[index] + houseRobbery(arr, index + 2);
    // Skip the current house
    int robAmt2 = houseRobbery(arr, index + 1);

    return max(robAmt1, robAmt2);
}

int main() {
    vector<int> arr{1, 2, 3, 1};
    int index = 0;
    
    int ans = houseRobbery(arr, index);
    cout << ans << endl; // Output should be 4 (rob houses 1 and 3)
    return 0;
}
