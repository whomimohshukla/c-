#include<iostream>
using namespace std;

bool isPallindromic(string &s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
            }
            start++;
            end--;
            }
    return true;
}

string largestPallindromicSubstring(string &s){
    string ans=" ";
    for (int i = 0; i < s.length(); i++)
    {
       for (int j = 0; j < s.length(); j++)
       {

        if (isPallindromic(s,i,j))
        {
            string t=s.substr(i,j-i+1);
            if(t.length()>ans.length()){
                ans=t;
            }   
        }
       }  
    }
    return ans;
}



int main(){
    string s="babad";
    string ans=largestPallindromicSubstring(s);
    cout<<ans;

}