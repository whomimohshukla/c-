#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isAnagram(string s,string t){
    if (s.length() != t.length())
    return false;

    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare sorted strings
    return s == t;
}
int main()
{
    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t))
    {
        cout << "The strings are anagrams." << endl;
    }
    else
    {
        cout << "The strings are not anagrams." << endl;
    }
}