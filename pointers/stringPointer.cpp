#include<iostream>
using namespace std;
int main(){
    char name[9]="sherBano";
    char* c=&name[0];
    cout<<c<<endl;
    cout<<name<<endl;
    cout<<&name<<endl;
    cout<<&name[0]<<endl;
    cout<<&c<<endl;
    cout<<&c[0]<<endl;
    cout<<*c<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(name)<<endl;




   
 
    return 0;
}