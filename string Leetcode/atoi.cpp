#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int myAtoi(string s)
    {
        int num = 0;
        int i = 0;
        int sign = 1;

        while (s[i] == ' ')
        {
            i++;
        }
        if (i < s.size() && (s[i] == '-' || s[i] == '+'))
        {
            sign = s[i] == '+' ? 1 : -1;
            ++i;
        }
        while (i < s.size() && isdigit(s[i]))
        {
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7'))
            {
                return sign == -1 ? INT_MIN : INT_MAX;
            }

            num = num * 10 + (s[i] - '0');
            ++i;
        }

        return num * sign;
    }
};
int main()
{
    Solution s; // Create an instance of Solution

    string input1 = "42";
    cout << "Input: " << input1 << " → Output: " << s.myAtoi(input1) << endl;

    string input2 = "   -42";
    cout << "Input: " << input2 << " → Output: " << s.myAtoi(input2) << endl;

    string input3 = "4193 with words";
    cout << "Input: " << input3 << " → Output: " << s.myAtoi(input3) << endl;

    string input4 = "-91283472332";
    cout << "Input: " << input4 << " → Output: " << s.myAtoi(input4) << endl;
}