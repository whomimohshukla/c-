#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findDuplicate(vector<int>&arr){
    while (arr[0]!=arr[arr[0]])
    {
       swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
    
}
int main()
{
 
 vector<int>arr{1,3,4,1,2};
 int ans=findDuplicate(arr);

cout<<ans<<endl;
 
}