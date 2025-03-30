#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkPallindrome(string &str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}
int main()
{

    string str = "mimohshukla";

    bool ans = checkPallindrome(str);

    if (ans)
    {
        cout << "String is pallindrome" << endl;
    }
    else
    {
        cout << "string is not pallindrome" << endl;
    }

    return 0;
}