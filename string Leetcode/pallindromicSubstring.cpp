#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int expandaround(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int pallindromicSubstring(string s)
{
    int count = 0;

    for (int i = 0; i <= s.length(); i++)
    {
        // if index is odd
        count += expandaround(s, i, i);
        // if index is even
        count += expandaround(s, i, i + 1);
    }
    return count;
}

int main()
{
    string str = "aaa";
    int length = pallindromicSubstring(str);
    cout << length << endl;
}