#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int maxProfit(vector<int> arr) {
    int maxProfit = 0;
    int minPrice = INT_MAX;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        minPrice = std::min(minPrice, arr[i]);  // Update the minimum price
        maxProfit = std::max(maxProfit, arr[i] - minPrice);  // Calculate max profit
    }
    
    return maxProfit;
}

int main() {
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;

    return 0;
}