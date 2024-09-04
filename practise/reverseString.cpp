#include<iostream>
using namespace std;
string swapString(string str,int start,int end){
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    return str;
}
int main(){
    string str="mimohshukla";
    int start=0;
    int end=str.length()-1;

    string ans=swapString(str,start,end);
    cout<<ans;
    return 0;
}