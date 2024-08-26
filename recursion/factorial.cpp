#include<iostream>
using namespace std;

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0) {  // Base case: factorial of 0 is 1
        return 1;
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    int n = 4;  // Input number
    int result = factorial(n);  // Call the factorial function
    cout << "Factorial of " << n << " is " << result;  // Output the result
    return 0;
}
