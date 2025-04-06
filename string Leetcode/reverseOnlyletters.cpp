#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string reverseOnlyletters(string s){
    int start=0;
    int end=s.length()-1;

    while(start<end){
        if(isalpha(s[start])&&isalpha(s[end])){
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
int main()
{
  string str="ab-cd";
  string ans=reverseOnlyletters(str);

  cout<<ans<<endl;
}