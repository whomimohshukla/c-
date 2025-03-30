#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string removeAllOccurrence(string s, string part) {
    int pos = s.find(part);

    // Loop until no more occurrences of 'part' are found
    while (pos != string::npos) {
        s.erase(pos, part.length()); // Remove the substring
        pos = s.find(part);          // Find the next occurrence
    }
    return s;
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";
    string ans = removeAllOccurrence(s, part);
    cout << ans<<endl;
    return 0;
}
