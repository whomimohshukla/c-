#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> addArrayToNumber(vector<int> &num, int k) {
  int start = num.size() - 1;
  vector<int> ans;
  while (start >= 0 || k > 0) {
    if (start >= 0) {
      k = k + num[start];
      int digit = k % 10;
      ans.push_back(digit);
      k = k / 10;
      start--;
    }
  }
  reverse(ans.begin(), ans.end());
  return ans;
}
int main() {
  vector<int> num{1, 2, 0, 0}; // Input array
  int k = 34;    
  int numSize=num.size();              // Input number

  // Call the function and get the result
  vector<int> ans = addArrayToNumber(num, k);

  // Print the result
  for (int digit : ans) {
    cout << digit;
  }
  cout << endl; // Add a newline after the output

  return 0;
}