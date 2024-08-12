#include<iostream>
using namespace std;

string reverseOnlyString(string s){
    int start=0;
    int end=s.length()-1;
    while(start<end){
        if (isalpha(s[start]) && isalpha(s[end])){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        else if(!isalpha(s[start])){
            start++;
        }
        else{
            end--;
        }
       
    }
     return s;
    

}

int main(){
   string s="ab-cd";
   cout<<"the original string : "<<s<<endl;

   string ans =reverseOnlyString(s);
   cout<<"the reverseOnly letters string is :"<<ans<<endl;
   
}