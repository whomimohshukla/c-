#include<iostream>
#include<vector>
using namespace std;
void solve(vector<string>&ans,int index,string output, string digits, vector<string>mapping){
    // base case
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }
    // recursive case
    int digit=digits[index]-'0';
    string value=mapping[digit];
    for(int i=0;i<value.length();i++){
       char ch=value[i];
            output.push_back(ch);
            // recurisve call
            solve(ans,index+1,output, digits,mapping);
            // backtracking 
            output.pop_back();
    }

}
int main(){
    string digits="23";
    vector<string>ans;

        if(digits.length()==0){
            return 0 ;
        }
        int index=0;
        string output="";
        vector<string>mapping(10);
        mapping[2]="abc";
        mapping[3]="def";
        mapping[4]="ghi";
        mapping[5]="jkl";
        mapping[6]="mno";
        mapping[7]="pqrs";
        mapping[8]="tuv";
        mapping[9]="wxyz";

        solve(ans,index,output, digits,mapping);


        for (int i = 0; i <ans.size(); i++)
        {
            cout<<ans[i]<<endl;
        }
        

       


    return 0;
}