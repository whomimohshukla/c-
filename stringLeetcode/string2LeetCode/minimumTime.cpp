#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int minimumTime(vector<string> time) {
    vector<int> minutes;

    // Convert time to minutes
    for (int i = 0; i < time.size(); i++) {
        string temp = time[i];
        int hour = stoi(temp.substr(0, 2));
        int minute = stoi(temp.substr(3, 2));
        minutes.push_back(hour * 60 + minute);
    }

    // Sort the time in minutes
    sort(minutes.begin(), minutes.end());

    // Find the minimum difference
    int mini = INT_MAX;
    for (int i = 0; i < minutes.size() - 1; i++) {
        int diff = minutes[i + 1] - minutes[i];
        mini = min(mini, diff);
    }

    // Check the difference between the last and first time across midnight
    int lastDiff = (minutes[0] + 1440) - minutes[minutes.size() - 1];
    mini = min(mini, lastDiff);

    return mini;
}

int main() {
    vector<string> time{"23:59", "00:00"};
    int ans = minimumTime(time);
    cout << ans;
    return 0;
}
