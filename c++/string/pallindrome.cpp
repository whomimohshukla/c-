#include<iostream>
#include<string.h>
using namespace std;

bool palindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Not a palindrome if characters don't match
        }
        start++;
        end--;
    }
    return true; // If all characters match, it's a palindrome
}

int main() {
    char str[100] = {"mimoh"};
    
    if (palindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
