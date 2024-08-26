#include<iostream>
#include<vector>
using namespace std;

int indexTarget(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == target) {
            ans = mid;
            end = mid - 1;  // Move to the left part to find the first occurrence
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    return ans;
}

int main() {
    vector<int> arr{10, 20, 20, 20, 30};
    int target = 20;

    int ans = indexTarget(arr, target);
    cout << ans << endl;

    return 0;
}
