#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60,70,80};
    int start=0;
   int size = sizeof(arr) / sizeof(arr[0]);
   int end=size-1;
   while(true){
    if(start>end){
        break;
    }
    if(start==end){
        cout << arr[start]<< " ";
    }
    else{
        cout<<arr[start]<< "" << arr[end]<<" " <<endl;
    }
    start++;
    end--;
   }
 return 0;
}