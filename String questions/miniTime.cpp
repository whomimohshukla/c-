#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
int findMinDifference(vector<string> &timePoints)
{
  vector<int> minutes;
  for (int i = 0; i < timePoints.size(); i++)
  {
    string curr = timePoints[i];
    int hours = stoi(curr.substr(0, 2));
    int min = stoi(curr.substr(3, 2));
    int totalminutes = hours * 60 + min;
    minutes.push_back(totalminutes);
  }
  sort(minutes.begin(), minutes.end());

  int mini = INT_MAX;
  // differnec
  for (int i = 0; i < minutes.size() - 1; i++)
  { 

    int diff=minutes[i+1]-minutes[i];
    mini=min(mini,diff);
  }
  int lastDiff=(minutes[0]+1440)-minutes[minutes.size()-1];
  mini=min(mini,lastDiff);
  return mini;
}
int main()
{
  vector<string> timePoints{"23:59", "00:00"};
  int ans = findMinDifference(timePoints);
  cout << ans << endl;
  return 0;
}