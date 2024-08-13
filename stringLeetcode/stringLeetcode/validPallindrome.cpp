#include<iostream>
using namespace std;

bool checkThePalindrome(string s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool validPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;
    while (start < end) {
        if (s[start] != s[end]) {
            // Check by removing one character either from the start or the end
            return checkThePalindrome(s, start + 1, end) || checkThePalindrome(s, start, end - 1);
        }
        start++;
        end--;
    }
    return true; // The string is already a palindrome
}

int main() {
    string s = "abca";
    bool ans = validPalindrome(s);
    cout << (ans ? "True" : "False");
}
