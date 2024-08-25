
#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector <int>arr1{1,2,4,5,6};
     vector<int>arr2{7,2,5};
     vector<int>ans;

     for (int i = 0; i <arr1.size(); i++)
     {
        for (int j = 0; j <arr2.size(); j++){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
            
            }
        }
     }
     // print the answer
     for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
        
     }
     

}

    