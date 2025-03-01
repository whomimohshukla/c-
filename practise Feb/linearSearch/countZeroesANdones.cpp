#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,0,0,1,0,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int numZeroes=0;
    int numOnes=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            numZeroes++;
        }
        if(arr[i]==1){
            numOnes++;
        }
    }
    cout<<"Number of zeroes in array:"<<numZeroes <<endl;
    cout<<"Number of ones in array:"<<numOnes <<endl;
 return 0;
}