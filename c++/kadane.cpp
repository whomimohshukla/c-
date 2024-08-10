#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>

using namespace std;

int kadaneTheorem( vector<int>arr){
    long long maxi = LONG_MIN; // maximum sum
    // cout<<maxi;
    long long sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum = sum + arr[i];
        // cout<<sum;
        if (sum>maxi)
        {
            maxi = sum; 
        }
        if (sum < 0)
        sum = 0;
    }
    return maxi;
}


int main(){
    vector<int>arr{-2,1,-3,4,-1,2,1,-5,4};
    int ans=kadaneTheorem(arr);
    cout<<ans<<endl;
}