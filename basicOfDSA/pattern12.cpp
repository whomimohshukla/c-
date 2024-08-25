#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int column = 0; column < i+1; column++)
        {
            cout<< i+column+1 <<" ";
        }
        cout<<endl;
        
    }
    
}