#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> factorial(int N) {
  vector<int> ans;
  ans.push_back(1); // Initialize with 1 as the factorial of 0! = 1 and 1! = 1
  int carry = 0;

  // Loop through numbers from 2 to N
  for (int i = 2; i <= N; i++) {
    // Multiply current number with each digit in ans
    for (int j = 0; j < ans.size(); j++) {
      int x = ans[j] * i + carry; // Multiply and add carry
      ans[j] =
          x % 10; // Store the last digit of the result in the current position
      carry = x / 10; // Update carry for the next position
    }

    // Handle any remaining carry
    while (carry) {
      ans.push_back(carry % 10);
      carry /= 10;
    }
  }

  // Reverse the result to get the correct order
  reverse(ans.begin(), ans.end());
  return ans;
}

int main() {
  int n;
  cout << "Enter a number to find the large factorial: ";
  cin >> n;

  vector<int> ans = factorial(n);

  // Output the full factorial number
  cout << "The factorial of " << n << " is: ";
  for (int digit : ans) {
    cout << digit;
  }
  cout << endl;

//   30414093201713378043612608166064768844377641568960512000000000


  return 0;
}
