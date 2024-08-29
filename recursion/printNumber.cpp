#include<iostream>
using namespace std;

void printNumber(int num) {
    if (num == 0) {
        return;
    }

    int newvalue = num / 10;
    printNumber(newvalue);  // Recursive call with the updated value

    int value = num % 10;
    cout << value <<" ";  // Print the last digit after the recursive call
}

int main() {
    int num = 647;
    printNumber(num);
    return 0;
}
