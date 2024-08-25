#include<iostream>
using namespace std;

void swapNumber(int &a,int &b){

    a=a+b;
    b=a-b;
    a=a-b;
    

    

}


int main(){
    int a=30;
    int b=20;
    cout<<"Before swapping"<<endl;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    swapNumber(a,b);
    cout<<"After swapping"<<endl;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;


}