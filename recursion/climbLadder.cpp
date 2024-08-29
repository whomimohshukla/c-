#include<iostream>
using namespace std;
int howToClimb(int n){
    if(n==0||n==1){
        return 1;
    }
    return howToClimb(n-1)+howToClimb(n-2);
}
int main(){
    cout<<"Enter a number:";
    int n;
    cin>>n;
    int ans=howToClimb(n);
    cout<<"Number of ways to climb "<<n<<" stairs is "<<ans;
    return 0;
}
