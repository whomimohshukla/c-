#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;



 int minimumTimeDiffrence(vector<string>time){
    vector<int>totalminutes;
    for(int i=0;i<time.size();i++){
        int hours = stoi(time[i].substr(0,2));
        int minutes = stoi(time[i].substr(3,2));
        totalminutes.push_back(hours*60+minutes);

    }


    //sorting
    sort(totalminutes.begin(),totalminutes.end());


    // to find differnce between the times;
    int mini = INT_MAX;
    for(int i=0;i<totalminutes.size()-1;i++){
        int diff = totalminutes[i+1]-totalminutes[i];
        mini=min(mini,diff);
    }

    // to handle the differnce between 12:59  to 00:00
    int diff2=(totalminutes[0]+1440)-totalminutes[totalminutes.size()-1];
    mini=min(mini,diff2);
    return mini;


 }
int main(){

    vector<string>time{"00:00","23:59","00:00"};

    int ans=minimumTimeDiffrence(time);
    cout<<"minutes:"<<ans <<endl;
    return 0;
}