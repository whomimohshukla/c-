#include <iostream>
#include <limits.h>  // For INT_MAX and INT_MIN

int reverse(int x) {
    int rev = 0;
    while (x != 0) {
        int pop = x % 10;  // Extract the last digit
        x /= 10;  // Remove the last digit from x
        
        // Check if the current reversed number will overflow on the next step
        if (rev > INT_MAX/10 || (rev == INT_MAX/10 && pop > 7)) return 0;  // Positive overflow check
        if (rev < INT_MIN/10 || (rev == INT_MIN/10 && pop < -8)) return 0;  // Negative overflow check
        
        rev = rev * 10 + pop;  // Update the reversed number
    }
    return rev;
}

int main() {
    int x = 123;
    std::cout << "Reversed: " << reverse(x) << std::endl;
    
    x = -123;
    std::cout << "Reversed: " << reverse(x) << std::endl;
    
    x = 120;
    std::cout << "Reversed: " << reverse(x) << std::endl;

    return 0;
}
