#include<iostream>
#include<vector>
using namespace std;
int minimumTimeDiff(vector<string>str){
    vector<int>totalMinutes;
    for (int i = 0; i <str.size(); i++)

    {

       string curr=str[i];
       int hours=stoi(curr.substr(0,2));
       int minutes=stoi(curr.substr(3,2));
       totalMinutes.push_back(hours*60+minutes);

       
    }
    
}
int main(){
   vector<string>str{"23:59","00:00"};
   int ans=minimumTimeDiff(str);
   cout<<ans<<endl;
    return 0;
}