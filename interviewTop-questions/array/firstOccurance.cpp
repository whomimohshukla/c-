#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstOccurance(vector<int>&arr,int target){

    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(target<arr[mid]){
            end=mid-1;

        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr{10, 20, 20, 20, 50, 60};
    int target = 20;

    int ans = firstOccurance(arr, target);

    if (ans != -1) {
        cout << "First occurrence at index: " << ans << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
