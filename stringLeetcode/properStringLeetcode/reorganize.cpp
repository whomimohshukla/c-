#include<iostream>
#include<climits>
using namespace std;
string reorganize(string str){
    int hash[26]={0};
    for (int i = 0; i < str.length(); i++)
    {
        hash[str[i] - 'a'] +=1;
    }


    // find the most frequent charcter
    char max_freq_char;
    int max_freq=INT_MIN;
    for (int i = 0; i < 26; i++){
        if (hash[i]>max_freq)
        {
           max_freq=hash[i];
           max_freq_char=i+'a';
        }
        
    }
    int index=0;
    while (max_freq>0 && index<str.length())
    {
        str[index]=max_freq_char;
        index+=2;
        max_freq-=1;
    }

    if (max_freq!=0)
    {
       return "";
    }

    hash[max_freq_char-'a']=0;


    //lets place the rest of charcters 

    for (int i = 0; i <26; i++)
    {
        while (hash[i]>0){
            index=index>=str.length()?1:index;
            str[index]=i+'a';
            index+=2;
            hash[i]-=1;


        }
    }

    return str;
    
    
    

    
}
int main(){
    string str="aab";
    string ans=reorganize(str);
    cout<<ans;
    return 0;
}