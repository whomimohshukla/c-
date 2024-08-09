#include<iostream>
using namespace std;

void checkNumber(int n){
    if(n%2==0){
        cout<<"Even"<<endl;
        }
        else{
            cout<<"Odd"<<endl;
            }

}
int main(){
    int n;
    cout<<"enter a number:";
    
    cin>>n;
    checkNumber(n);
    return 0;
}

