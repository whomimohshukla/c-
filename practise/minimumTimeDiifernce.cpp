#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
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

    // sort
    sort(totalMinutes.begin(),totalMinutes.end());


    int mini=INT_MAX;
    for (int i = 0; i < totalMinutes.size()-1; i++) {
        int diff=totalMinutes[i+1]-totalMinutes[i];
        mini=min(mini,diff);
    }

    int lastDiff=(totalMinutes[0]+1440)-totalMinutes[totalMinutes.size()-1];
    mini=min(mini,lastDiff);
    return mini;

    
}
int main(){
   vector<string>str{"23:00","00:00"};
   int ans=minimumTimeDiff(str);
   cout<<ans<<endl;
    return 0;
}