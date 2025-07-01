#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

    vector<int>arr{1,0,1,0,1,1,1,0};

    int countZero=0;
    int countOnes=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            countZero++;
        }
        else{
            countOnes++;
        }
    }
    cout<<"Number of zeroes are :"<<countZero<<endl;
    cout<<"Number of ones are :"<<countOnes<<endl;
 return 0;
}