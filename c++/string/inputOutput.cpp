#include<iostream>
using namespace std;


int main(){

    char name[100];
    // cin>>name;
    // cout<<name;
    cout<<"enter your name :";

    cin>>name;

    for (int i = 0; i <=6; i++)
    {
        cout<<"index:"<<i<<"   value:" <<name[i] <<endl;
    }

    int value=(int)name[6];
    cout<<value;
    return 0;
    
}