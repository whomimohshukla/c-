#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

static bool mycomp(string a, string b){
    return a + b > b + a;
}

string largestNumber(vector<int>& nums){
    vector<string> numbers;
    for(int i = 0; i < nums.size(); i++){
        numbers.push_back(to_string(nums[i]));
    }
    sort(numbers.begin(), numbers.end(), mycomp);
    if (numbers[0] == "0"){
        return "0";
    }
    string ans = "";
    for(int i = 0; i < numbers.size(); i++){
        ans += numbers[i];
    }
    return ans;
}

int main(){
    vector<int> nums{3, 30, 34, 5, 9};
    string ans = largestNumber(nums);

    cout << ans << endl; // Output should be: 9534330
}
