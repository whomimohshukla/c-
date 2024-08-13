#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int minimumTime(vector<string>& time) {
    vector<int> totalMinutes;

    // Convert all times to minutes
    for(int i = 0; i < time.size(); i++) {
        string currS = time[i];
        int hours = stoi(currS.substr(0, 2));
        int minutes = stoi(currS.substr(3, 2));

        int min = hours * 60 + minutes;
        totalMinutes.push_back(min);
    }

    // Sort the vector of total minutes
    sort(totalMinutes.begin(), totalMinutes.end());

    // Calculate the minimum difference
    int mini = INT_MAX;

    for(int i = 0; i < totalMinutes.size() - 1; i++) {
        int diff = totalMinutes[i + 1] - totalMinutes[i];
        mini = min(mini, diff);
    }

    // Handle circular case (i.e., time difference between last and first time considering midnight)
    int circularDiff = (totalMinutes[0] + 1440) - totalMinutes[totalMinutes.size() - 1];
    mini = min(mini, circularDiff);

    return mini;
}

int main() {
    vector<string> time{"23:59", "00:00"};

    int ans = minimumTime(time);
    cout << ans;

    return 0;
}
