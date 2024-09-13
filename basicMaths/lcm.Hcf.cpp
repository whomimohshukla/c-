#include<iostream>
using namespace std;
int hcf(int a,int b){
    if(b==0)
    return a;
    if (a==0)
    return b;
    while (a>0 && b>0)
    //whomimohshukla
    
    {
        if (a>b)
        { 
            a=a-b;
        }
        else{
            b=b-a;
        }   
    }
    return a==0?b:a;
  
}
int main(){
    int a=24;
    int b=36;
    int ans=hcf(a,b);
    cout<<"The HCF of "<<a<<" and "<<b<<" is "<<ans;
    return 0;
}