#include<iostream>
using namespace std;

int Factorial(int n){
    if ( n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*Factorial(n-1);
    }
    
    
}

int main(){
    int n;
    cout<<"enter a number:";
    
    cin>>n;

    if (n<0)
    {
        cout << "the factorial of less than zero does not exist:";

    }
    else
    {
        cout << "the factorial of " << n << " is " << Factorial(n);
    }
    
    
    return 0;
}

