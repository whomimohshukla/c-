#include<iostream>
using namespace std;
bool pallinDrome(string str,int start,int end){
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
        }
    return true;
}
int main(){
    string str="naman";
    int start=0;
    int end=str.length()-1;
    bool ans=pallinDrome(str,start,end);
    if (ans)
    {
       cout<<"string is pallindrome";
    }
    else{
        cout<<"string is not pallindrome";
    }
    
    

    return 0;
}