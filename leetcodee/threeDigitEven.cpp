#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> findEvenNumbers(vector<int>& digits) {
    set<int> result;

    int n = digits.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == i) continue;
            for (int k = 0; k < n; ++k) {
                if (k == i || k == j) continue;
                int a = digits[i], b = digits[j], c = digits[k];
                if (a == 0) continue;      // leading 0 is not allowed
                if (c % 2 != 0) continue;  // must end with an even digit
                int num = a * 100 + b * 10 + c;
                result.insert(num);
            }
        }
    }

    return vector<int>(result.begin(), result.end());
}
