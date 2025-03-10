#include<iostream>
using namespace std;

string removeallOccurances(string s,string part){
   int pos=s.find(part);
   while(pos!=string::npos){
    s.erase(pos,part.length());
    pos=s.find(part);
   }
   return s;
}
int main()
{
  string s="daabcbaabcbc";
  string part="abc";

  string ans=removeallOccurances(s,part);
  cout<<ans<<endl;
}