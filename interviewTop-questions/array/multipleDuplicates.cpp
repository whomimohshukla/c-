#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> duplicates;

    for (int num : arr) {
        if (seen.find(num) != seen.end()) {
            duplicates.push_back(num);
        } else {
            seen.insert(num);
        }
    }

    return duplicates;
}

int main()
{
    vector<int> arr{1, 3, 4, 2,3, 2};

    vector<int> ans = findDuplicates(arr);

    for (int num : ans) {
        cout << "Duplicate number is: " << num << endl;
    }

    return 0;
}
