#include <iostream>
using namespace std;

int squareRoot(int n) {
    int start = 0;
    int end = n;
    int mid;
    int ans = -1;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (mid * mid == n) {
            return mid; // Perfect square found
        } 
        else if (mid * mid > n) {
            end = mid - 1;
        } 
        else {
            ans = mid; // Store the floor value
            start = mid + 1;
        }
    }

    return ans; // Return floor of square root
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Square root is not defined for negative numbers." << endl;
    } else {
        int ans = squareRoot(n);
        cout << "The floor value of the square root of " << n << " is: " << ans << endl;
    }

    return 0;
}
