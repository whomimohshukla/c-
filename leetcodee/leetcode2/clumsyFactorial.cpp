#include <iostream>
using namespace std;

int clumsy(int N) {
  // If N is very small, handle special cases directly
  if (N == 1)
    return 1;
  if (N == 2)
    return 2 * 1;
  if (N == 3)
    return 3 * 2 / 1;

  // Start with the first group: N * (N-1) / (N-2) + (N-3)
  int result = N * (N - 1) / (N - 2) + (N - 3);
  N -= 4;

  // Process remaining numbers in groups of 4
  while (N >= 4) {
    result -= N * (N - 1) / (N - 2) - (N - 3);
    N -= 4;
  }

  // Handle any remaining numbers
  if (N == 3)
    result -= N * (N - 1) / (N - 2);
  else if (N == 2)
    result -= N * (N - 1);
  else if (N == 1)
    result -= N;

  return result;
}

int main() {
  int n = 10;
  cout << "Clumsy factorial of " << n << " is: " << clumsy(n) << endl;
  return 0;
}
