#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int findMax(const vector<int>& arr) {
    int maxVal = INT_MIN;
    for (int num : arr) {
        if (num > maxVal) {
            maxVal = num;
        }
    }
    return maxVal;
}

int findMin(const vector<int>& arr) {
    int minVal = INT_MAX;
    for (int num : arr) {
        if (num < minVal) {
            minVal = num;
        }
    }
    return minVal;
}
int main()
{
    vector<int> nums = {3, 5, 7, 2, 8, -1, 4};
    cout << "Maximum number in array: " << findMax(nums) << endl;
    cout << "Minimum number in array: " << findMin(nums) << endl;
}