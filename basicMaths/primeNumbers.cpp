#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int countPrime(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            ++count;
        }
    }
    return count;
}

int main() {
    int n = 21;
    int ans = countPrime(n);
    cout << "Number of primes less than " << n << " is: " << ans << endl;
    return 0;
}
