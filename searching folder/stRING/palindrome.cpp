#include<iostream>
using namespace std;

bool pallindromeicString(string str){
    int start=0;
    int end=str.length()-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str="mimohshukla";
    bool ans=pallindromeicString(str);
    if(ans){
        cout<<"String is pallindromic"<<endl;
    } 
    else{
        cout<<"string is not pallindromic"<<endl;
    }
}