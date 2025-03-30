#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;

int findMinimumDiffrence(vector<string> &timePoints)
{
    vector<int> minutes;

    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];
        int hours = stoi(curr.substr(0, 2));
        int min = stoi(curr.substr(3, 2));

        int totalMInutes = hours * 60 + min;

        minutes.push_back(totalMInutes);
    }

    // sort the miniuts

    sort(minutes.begin(), minutes.end());

   

   
    
     //differnce 
    int mini=INT_MAX;

    for(int i=0;i<minutes.size()-1;i++){
        int differnce=minutes[i+1]-minutes[i];
        mini=min(mini,differnce);

    }

    //last diffence

    //in one day there is 1440 minutes
    int lastDiff=(minutes[0]+1440)-minutes[minutes.size()-1];
    mini=min(mini,lastDiff);
    return mini;
}
int main()
{

    vector<string> s{"23:59", "00:00"};

    int ans = findMinimumDiffrence(s);
    cout << ans << endl;

    return 0;
}