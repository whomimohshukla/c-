#include <iostream>
#include <vector>
using namespace std;

void combination_Sum_helper(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& v, int index) {
    // base case
    if (target == 0) {
        ans.push_back(v);
        return;
    }
    if (target < 0) {
        return;
    }
    for (int i = index; i < candidates.size(); i++) {
        v.push_back(candidates[i]);
        combination_Sum_helper(candidates, target - candidates[i], ans, v, i);
        v.pop_back(); // Backtrack to try other combinations
        
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> v;
    combination_Sum_helper(candidates, target, ans, v, 0);
    return ans;
}

int main() {
    vector<int> combination{2, 3, 6, 7};  // Input candidates
    int target = 7;  // Target sum

    // Get the result
    vector<vector<int>> result = combinationSum(combination, target);

    // Print the result
    cout << "Combinations that sum up to " << target << " are:\n";
    for (const auto& comb : result) {
        cout << "[ ";
        for (int num : comb) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
