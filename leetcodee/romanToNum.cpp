#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;

int romanToString(string s){
    unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

    int ans=0;
    for(int i=0; i<s.size(); i++){
        if (i<s.size()-1 && roman[s[i]]<roman[s[i+1]])
        {
            ans-=roman[s[i]];
        }
        else{
            ans+=roman[s[i]];
        }

        
    }
    return ans;


}
int main(){
   string s="MCMXVI";

    int ans=romanToString(s);
    cout<<ans;


    return 0;
}