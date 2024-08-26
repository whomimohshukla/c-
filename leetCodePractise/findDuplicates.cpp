#include<iostream>
#include<vector>
using namespace std;
int findDuplicates(vector<int>arr){
    while (arr[0]!=arr[arr[0]])
    {
       swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
    

}
int main(){
    vector<int>arr{1,3,4,5,5};

    int ans=findDuplicates(arr);
    cout<<ans<<endl;

    return 0;
}