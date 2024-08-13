#include<iostream>


using namespace std;
string removeALloccurance(string s,string part){
    int pos=s.find(part);
    while (pos!=string ::npos)
    {
        s.erase(pos,part.length());
        pos=s.find(part);
    }
    return s;
    

}

int main(){
    string s="daabcbaabcbc";
    string part = "abc";
    string ans=removeALloccurance(s,part);
    cout<<ans;
}