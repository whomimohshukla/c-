#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


int maximumElement(vector<int>arr){
        int maxi=INT_MIN;

    for(int i=0;i<arr.size();i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
int main()
{
    vector<int>arr{2,4,6,8,9,14,0};

    int ans=maximumElement(arr);
    cout<<ans<<endl;

 return 0;
}