#include<iostream>
#include<vector> // Include the vector header
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0; // Handle the edge case for an empty array

        int j = 0; // Pointer for the last unique element
        
        // Start iterating from the second element
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[j]) {   // If a new unique element is found
                j++;                   // Move the unique element pointer
                nums[j] = nums[i];     // Place the unique element at index j
            }
        }
        
        return j + 1; // Return the number of unique elements
    }
};

int main() {
    Solution solution;

    // Test case
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    
    // Call the removeDuplicates function
    int k = solution.removeDuplicates(nums);
    
    // Print the results
    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
