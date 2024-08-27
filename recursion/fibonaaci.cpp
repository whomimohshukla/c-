#include<iostream>
using namespace std;
int fibonacci(int n){
    if (n==1)
    {
       return 0;

    }
    if (n==2)
    {
       return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2);
    
    
}
int main(){
    cout<<"Enter a number:";
    int n;
    cin>>n;

    int ans=fibonacci(n);
    cout<<"The "<<n<<"th Fibonacci number is "<<ans;
    return 0;
}