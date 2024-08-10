#include<iostream>
#include<string.h>
using namespace std;


int getLen(char name[]){
    int len = 0;
    int i=0;
    while(name[i] != '\0'){
        len++;
        i++;
        }
        return len;

}


int main(){

    char name[100];
    cout<<"enter your name :";
    cin>>name;

    int ans=getLen(name);
    cout<<"length of your name is "<<ans<<endl;
    cout<<"length through predefined:"<<strlen(name);

    

    return 0;
    
}