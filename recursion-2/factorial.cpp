#include<iostream>
using namespace std;
 

int factorialOfnumber(int n){
    if(n<0){
        return -1;
    }
    if(n==0 || n==1){
        return 1;
    }

    return n*factorialOfnumber(n-1);
}
int main()
{
    int n;
    cout<<"enter an number :";
    cin>>n;

    int ans=factorialOfnumber(n);
    cout<<ans<<endl;
 return 0;
}