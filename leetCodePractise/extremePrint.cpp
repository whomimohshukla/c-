#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    // cout<<sizeof(arr);
    // cout<<sizeof(arr[0]);
    int n = sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;
    while(true){
        if (arr[start]==arr[end])
        {
           cout<<arr[start]<<endl;
        }
        else if (arr[start]>arr[end])
        {
            break;
        }
        
        else{
            cout<<arr[start]<<arr[end];
        }
        start++;
        end--;
        
    }

  
    return 0;
}