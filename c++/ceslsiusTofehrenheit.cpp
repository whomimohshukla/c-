#include<iostream>
using namespace std;

void celsiusTofeherenhite(int celsius){

    float fehrenheight=((celsius*1.8)+32);
    cout<<"The temperature in fehrenheight is "<<fehrenheight<<endl;
    
    
}

int main(){
    int celsius;
    cout<<"enter a celsius temperature:";
    
    cin>>celsius;
    celsiusTofeherenhite(celsius);


    
    
    return 0;
}

