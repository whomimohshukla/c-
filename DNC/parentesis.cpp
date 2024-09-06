#include<iostream>
#include<vector>
using namespace std;
void solve( vector<string>&ans,int n,int used_open,int used_closed,int rem_open,int rem_closed,string output){
    // base case
    if (rem_open==0 && rem_closed==0)
    {
        ans.push_back(output);
        return;
    }
    // open bracket

    if (rem_open>0){
        output.push_back('(');
        solve(ans,n,used_open+1,used_closed,rem_open-1,rem_closed,output);
        output.pop_back();
    }
    // closed bracket
    if(used_open>used_closed){
        output.push_back(')');
        solve(ans,n,used_open,used_closed+1,rem_open,rem_closed-1,output);
        output.pop_back();

    }

    

}
int main(){
    int n=3;

    vector<string>ans;

    
    int used_open=0;
    int used_closed=0;
    string output="";
    int rem_open=n;
    int rem_closed=n;

     solve(ans,n,used_open,used_closed,rem_open,rem_closed,output);
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    


    return 0;
}