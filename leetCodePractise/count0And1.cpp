#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{0,1,0,1,1,0,1,1};
    int n = arr.size();

    int numZeroes=0;
    int numOnes=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            numZeroes++;
            }
            else{
                numOnes++;
                }

    }

    cout<<"number of zeroes :" <<numZeroes;
    cout<<"number of ones :" <<numOnes;
    return 0;
    
}