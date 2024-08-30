#include<iostream>
using namespace std;

void lastOccuranceLTR(string &str, char target, int index, int &ans) {
    // Base condition: stop if index is equal to the length of the string
    if (index == str.length()) {
        return;
    }
    // Check if the current character is the target
    if (str[index] == target) {
        ans = index;
    }
    // Recurse to the next character
    lastOccuranceLTR(str, target, index + 1, ans);
}



int main() {
    string str = "abcddedg";
    char target = 'd';

    int ans = -1;
    int index = 0;

    lastOccuranceLTR(str, target, index, ans);
    cout << ans;

    return 0;
}
