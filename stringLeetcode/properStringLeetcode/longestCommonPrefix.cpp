#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>str){
    string ans;
    int index=0;
    
    while (true)
    {
        char curr_ch=0;
        for (auto strN : str)
        {
             if (curr_ch==0)
           {
            curr_ch=strN [index];

            
           }
            else if (index>=strN.size())
            {
                curr_ch=0;
                break;
            }
            else if (strN[index]!=curr_ch){
                curr_ch=0;
                break;
            }
 
        }
        if (curr_ch==0){
            break;
        }
        ans.push_back(curr_ch);
        index++;
        
    }
    return ans;

    
}
int main(){
    vector<string>str{"flower","flow","flight"};
    string ans=longestCommonPrefix(str);
    cout<<ans<<endl;
    return 0;
}