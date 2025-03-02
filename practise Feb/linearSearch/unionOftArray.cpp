#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr1[]={1,3,4,5,7};
    int sizeOfArray1=  sizeof(arr1) / sizeof(arr1[0]);
    int arr2[]={2,4,6,8};
    int sizeOfArray2=  sizeof(arr2) / sizeof(arr2[0]);

    vector<int>ans;

    // push all elements 
    for(int i=0;i<sizeOfArray1;i++){
        ans.push_back(arr1[i]);
    }
    for(int i=0;i<sizeOfArray2;i++){
        ans.push_back(arr2[i]);
    }

    // print the ans
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


 return 0;
}