#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
string revrseOnlyVowels(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        if (isVowel(s[start]) && isVowel(s[end]))
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }

        else if(isVowel(s[start])==0){
            start++;

        }
        else{
            end--;
        }
    }

    return s;
}
int main()
{
    string s = "IceCreAm";
    string ans = revrseOnlyVowels(s);

    cout << ans << endl;

    return 0;
}