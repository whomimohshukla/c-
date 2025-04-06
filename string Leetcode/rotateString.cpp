#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool rotateString(string s,string goal){
    if(s.length()==goal.length()){
        return false;
    }

    string combinedstring =s+s;

    while(combinedstring.find(goal)!=string::npos){
        return true;
    }

    return false;
}
int main()
{
 string s= "abcde"; string  goal = "cdeab";
 if(rotateString(s,goal)){
    cout<<"string is rotated"<<endl;
 }
 else{
    cout<<"string is not rotated"<<endl;
 }
}