#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string removeAllAdjDuplicates(string str)
{
    string ans = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (!ans.empty() && ans.back() == str[i])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(str[i]);
        }
    }
    return ans;
}
int main()
{
    string s = "abbaca";
    string ans = removeAllAdjDuplicates(s);
    cout << ans << endl;
}