#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearch(vector<int>&arr,int target){

    int start=0;
    int end=arr.size()-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==target){
            return true;
        }
        else if(target<arr[mid]){
            end=mid-1;

        }
        else{
            start=mid+1;
        }
    }
    return false;
}
int main()
{

    vector<int> arr{10, 20, 30, 40, 50, 60};

    int target = 340;

    bool ans = binarySearch(arr, target);

    if (ans)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }
}