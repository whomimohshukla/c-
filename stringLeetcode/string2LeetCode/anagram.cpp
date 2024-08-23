#include<iostream>
using namespace std;
bool anagramCheck(string str1, string str2){
    int freq[256]={0};
    for(int i=0;i<str1.length();i++){
        freq[str1[i]]++;
        }
    for(int i=0;i<str2.length();i++){
        freq[str2[i]]--;
        }
        for(int i=0;i<256;i++){
            if(freq[i]!=0){
                return false;
            }
            }return true;
    

}
int main(){
    string str="anagram";
    string str2="nagaram";
    bool ans=anagramCheck(str,str2);
    if(ans){
        cout<<"Anagram"<<endl;
    }
    else{
        cout<<"Not Anagram"<<endl;
    }
 
    return 0;
}