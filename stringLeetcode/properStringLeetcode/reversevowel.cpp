#include<iostream>
#include<algorithm>
using namespace std;
bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

string reverseVowel(string str){
    int start=0;
    int end=str.length()-1;
    while(start<=end){

        if(isVowel(str[start]) && isVowel(str[end])){
            swap(str[start],str[end]);
            start++;
            end--;

        }

        else if (isVowel(str[start])==0)
        {
            start++;
        }
        else{
            end--;
        }
        
    }
    return str;

}
int main(){

    string str="hello";

    string ans=reverseVowel(str);
    cout<<ans;


    return 0;
}