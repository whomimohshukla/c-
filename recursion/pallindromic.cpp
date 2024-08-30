#include<iostream>
using namespace std;
bool pallindromic(string str,int start,int end){
    if(start>=end){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }

    pallindromic(str,start+1,end-1);


}
int main(){

    string str="racecar";
    int start=0;
    int end=str.length()-1;

    bool ans=pallindromic(str,start,end);
    if (ans)
    {
        cout<<"The string is a pallindrome"<<endl;
    }
    else{
        cout<<"The string is not a pallindrome"<<endl;
    }
    




    return 0;
}