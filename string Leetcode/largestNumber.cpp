#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static bool myComp(string a, string b)
{
    string t1 = a + b;
    string t2 = b + a;
    return t1 > t2;
}

string largestNumber(vector<int> &nums)
{
    // conversion of number to string
    vector<string> snums;

    for (int i = 0; i < nums.size(); i++)
    {
        snums.push_back(to_string(nums[i]));
    }

    // sort the number to string vector

    sort(snums.begin(), snums.end(), myComp);

    if (snums[0] == "0")
        return "0";

    string ans = "";

    for (int i = 0; i < snums.size(); i++)
    {
        ans += snums[i];
    }
    return ans;
}
int main()
{
    vector<int> arr{10, 2};
    string ans = largestNumber(arr);

    cout << ans << endl;
}