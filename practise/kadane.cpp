#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int kadaneTh1(vector<int>&arr,int n){
   int maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // subarray = arr[i.....j]
            int sum = 0;

            //add all the elements of subarray:
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            maxi = max(maxi, sum);
        }
    }
    return maxi;
}
int main(){

    vector<int>arr{-2,1,-3,4,-1,2,1,-5,4};
    int n = arr.size();
    int sum=kadaneTh1(arr,n);
    cout<<"Maximum Subarray Sum is "<<sum<<endl;


    return 0;
}