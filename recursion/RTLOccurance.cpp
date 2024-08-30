#include<iostream>
using namespace std;

void lastOccuranceRTL(string &str, char target, int index, int &ans) {
    // Base condition: stop if index is less than 0
    if (index < 0) {
        return;
    }
    // Check if the current character is the target
    if (str[index] == target) {
        ans = index;
        return;
    }
    // Recurse to the previous character
    lastOccuranceRTL(str, target, index - 1, ans);
}

int main() {
    string str = "abcddedg";
    char target = 'd';

    int ans = -1;
    int index = str.length() - 1;

    lastOccuranceRTL(str, target, index, ans);
    cout << ans;

    return 0;
}

