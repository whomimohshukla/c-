#include <iostream>
#include <vector>

using namespace std;

int findPeakElement(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;
    
    while (low < high) {
        int mid = low + (high - low) / 2;

        // Check if mid is greater than the next element
        if (nums[mid] < nums[mid + 1]) {
            // Peak must be on the right half
            low = mid + 1;
        } else {
            // Peak must be on the left half including mid
            high = mid;
        }
    }
    
    // Low and high converge to the peak element
    return low;
}

int main() {
    vector<int> nums{1, 2, 3, 1};

    int peakIndex = findPeakElement(nums);
    cout << "Peak element index: " << peakIndex << endl;
    cout << "Peak element value: " << nums[peakIndex] << endl;

    return 0;
}
