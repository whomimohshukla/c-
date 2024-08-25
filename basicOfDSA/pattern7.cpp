#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int rows = 0; rows < n; rows++)
    {
       for (int columns = 1; columns < n-rows; columns++){
        cout<< columns;
       }
       cout<<endl;
        
    }
    
}