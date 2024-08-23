#include<iostream>
using namespace std;
bool isomorphic(string s,string t){
    int hash[256]={0};
    bool isBoolChar[256]={0};

    for (int i = 0; i <s.length(); i++)
    {
        if (hash[s[i]] ==0 && isBoolChar[t[i]]==0)
        {
            hash[s[i]]=t[i];
            isBoolChar[t[i]]=true;
            
        }

        
    }

    for (int i = 0; i < s.length(); i++)
    {
        if(hash[s[i]]!=t[i])
        {
            return false;
            }


    }
    return true;
    
    


}
int main(){
    string s = "foo";
    string t = "bar";
    bool ans=isomorphic(s,t);
    if (ans)
    {
       cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    

    return 0;
}