#include<iostream>
using namespace std;

bool anagram(string s,string t){

    int freq[256]={0};
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
    }
    for(int i=0;i<t.length();i++){
        freq[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(freq[i]!=0){
                return false;
                }
                }
                return true;
                

}

int main(){

    string s="anagram";
    string t="nagaram";

    bool ans=anagram(s,t);
    if(ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}