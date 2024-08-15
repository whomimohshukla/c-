#include<iostream>


using namespace std;


bool ismorphicStrings(string s,string t){
    int hash[256]={0};
    bool isCharacter[256]={0};
    for (int i = 0; i <s.length(); i++)
    {
        if (hash[s[i]]==0 && isCharacter[t[i]]==0)
        {
            hash[s[i]]=t[i];
            isCharacter[t[i]]=true;
        }
        
    }
    for (int i = 0; i <s.length(); i++){
        if (hash[s[i]]!=t[i]){
            return false;
        }

    }
    return true;

    
}
int main(){
   string s = "foo";
   string t = "bar";
   bool ans=ismorphicStrings(s,t);
   if(ans){
    cout<<"The strings are isomorphic"<<endl;
   }
   else{
    cout<<"The strings are not isomorphic"<<endl;
   }

    return 0;
}