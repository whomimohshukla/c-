#include<iostream>
using namespace std;

void countNumbersreverse(int n){
    for (int i = n; i>=0; i--)
    {
        cout<<i<<" ";
    }
    cout <<endl;
    
}

int main(){
    int n;
    cout<<"enter a number:";
    
    cin>>n;
    countNumbersreverse(n);


    
    
    return 0;
}

