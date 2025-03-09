#include<iostream>
#include<algorithm>
#include<vector>
#include<set>


using namespace std;

int kDiiff(vector<int>arr,int k){

    
   sort(arr.begin(), arr.end());
   set<pair<int, int>> ans;
   int i=0;int j=1;

   while(j<arr.size()){
    int diff=arr[j]-arr[i];
    if(diff==k){
        ans.insert({arr[i],arr[j]});
        // cout<<"{"<<arr[i]<<arr[j]<<" }";
        i++;
        j++;
    }
    else if(diff>k){
        i++;

    }
    else{
        j++;
    }
    if(i==j){
        j++;
    }
   }

   return ans.size();


}

int main()
{
  vector<int>arr{1,1,3,4,5};
  int k=2;
  int ans=kDiiff(arr,k);
  cout<<ans<<endl;



}