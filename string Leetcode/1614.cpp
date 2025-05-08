#include <iostream>
#include <string>
using namespace std;

int maxDepth(const string& s) {
    int current_depth = 0;  // To keep track of the current depth
    int max_depth = 0;      // To keep track of the maximum depth

    // Traverse through each character in the string
    for (char ch : s) {
        if (ch == '(') {
            current_depth++;  // Increase depth for '('
            max_depth = max(max_depth, current_depth);  // Update max depth
        } else if (ch == ')') {
            current_depth--;  // Decrease depth for ')'
        }
    }

    return max_depth;  // Return the maximum nesting depth
}

int main() {
    // Test cases
    string s1 = "(()())";
    string s2 = "()(())";
    string s3 = "()";
    string s4 = "((()))";

    cout << "Max depth of \"" << s1 << "\" is: " << maxDepth(s1) << endl;  // Output: 2
    cout << "Max depth of \"" << s2 << "\" is: " << maxDepth(s2) << endl;  // Output: 2
    cout << "Max depth of \"" << s3 << "\" is: " << maxDepth(s3) << endl;  // Output: 1
    cout << "Max depth of \"" << s4 << "\" is: " << maxDepth(s4) << endl;  // Output: 3

    return 0;
}
