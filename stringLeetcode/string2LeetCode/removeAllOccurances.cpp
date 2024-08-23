// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         int pos=s.find(part);
//         while(pos!=string::npos){
//             s.erase(pos,part.length());
//             pos=s.find(part);
//         }
//          return s;
        
//     }
   
// };

#include<iostream>
using namespace std;
string removeAllOccurances(string s,string part){
    int pos=s.find(part);
    while(pos!=string::npos){
        s.erase(pos,part.length());
        pos=s.find(part);
    }

    return s;


}
int main(){
    string  s = "daabcbaabcbc"; 
    string part = "abc";

    string ans=removeAllOccurances(s,part);
    cout<<ans;

    return 0;
}