#include<iostream>
using namespace std;

bool isPrime(int n){
    //if number is 0 or 1
    if(n<=1){
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false; // Not prime if divisible by i
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    bool ans=isPrime(n);
    int count=0;
    if(ans){
      count++;
      cout<<count;
      
    }
 }