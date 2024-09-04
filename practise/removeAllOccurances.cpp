#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string removeAllOccurances(string str,string part){
    int pos=str.find(part);
    while(pos!=string::npos){
        str.erase(pos,part.length());
        pos=str.find(part);
    }
    return str;


}
int main(){
    string str="daabcbaabcbc";
    string part="abc";
    string ans=removeAllOccurances(str,part);
    cout<<ans;
    return 0;
}