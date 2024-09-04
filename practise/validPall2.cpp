#include<iostream>
using namespace std;

bool checkPallindrome(string str, int start, int end) {
    while (start <= end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool isPallindrome(string str, int start, int end) {
    while (start <= end) {
        if (str[start] != str[end]) {
            return checkPallindrome(str, start + 1, end) || checkPallindrome(str, start, end - 1);
        } else {
            start++;
            end--;
        }
    }
    return true;
}

int main() {
    string str = "abca";
    int start = 0;
    int end = str.length() - 1;

    if (isPallindrome(str, start, end)) {
        cout << "The string is a pallindrome" << endl;
    } else {
        cout << "The string is not a pallindrome" << endl;
    }

    return 0;
}
