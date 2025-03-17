#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<int>&arr,int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            return true;
        }

      
    }
      return false;
}
int main()
{
    vector<int>arr{1,2,3,4,5,6,7,8};
    int key=43;
    bool ans=linearSearch(arr,key);
    if(ans){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
 return 0;
}