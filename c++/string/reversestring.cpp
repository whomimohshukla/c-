#include<iostream>
#include<string.h>
using namespace std;



int main(){

    char name[100];
    cin>>name;


    int start=0;
    int end=strlen(name)-1;

    while (start<=end)
    {
        swap(name[start],name[end]);
        start++;
        end--;
 
    }


    cout<<"swapped array:"<<name;
    

   

    

    return 0;
    
}