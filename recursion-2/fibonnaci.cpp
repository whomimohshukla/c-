#include<iostream>
using namespace std;

int fibonacci(int num){
   if (num < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
        return -1;
    }
    if (num == 0) return 0; // Base case
    if (num == 1) return 1;

    return fibonacci(num-1) +fibonacci(num-2);

}
int main()
{      
    int num;
    cout << "Enter the position (n) for Fibonacci: ";
    cin >> num;
    int result = fibonacci(num);
    if (result != -1) {
        cout << "Fibonacci number at position " << num << " is: " << result << endl;
    }
}