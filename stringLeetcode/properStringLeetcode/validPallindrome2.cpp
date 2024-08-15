#include<iostream>
using namespace std;

bool checkIt(string str,int start,int end){
    while (start<end)
    {
        if (str[start]!=str[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
    
}

bool validpallindrome(string str){
    int start=0;
    int end=str.length()-1;
    while(start<end){
        if (str[start]!=str[end])
        {
            return checkIt(str,start+1,end) || checkIt(str,start,end+1);
        }
        else{
            start++;
            end--;

        }
        
       
    }
     return true;

   
}
int main(){
    string str="abca";

    bool ans=validpallindrome(str);
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;

    }
    
    return 0;
}