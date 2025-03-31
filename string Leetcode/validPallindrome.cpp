#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkPalindrome(string s, int start, int end)
{
    // Check if the substring is a palindrome
    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool validPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    // Check for palindrome or possible removal of one character
    while (start < end)
    {
        if (s[start] != s[end])
        {
            // Check by removing either start or end character
            return checkPalindrome(s, start + 1, end) || checkPalindrome(s, start, end - 1);
        }
        start++;
        end--;
    }
    return true; // Return true if no mismatch is found
}

int main()
{
    string str = "abca";
    bool ans = validPalindrome(str);
    if (ans)
    {
        cout << "String is a valid palindrome after removing at most one character." << endl;
    }
    else
    {
        cout << "String is not a valid palindrome." << endl;
    }

    return 0;
}
