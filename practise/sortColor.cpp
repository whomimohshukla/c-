#include<iostream>
using namespace std;
void sortColor(int arr[],int n){
    int low=0,high=n-1,mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            mid++;
            high--;
        }
       

    }
}
int main(){
    int arr[]={2,0,2,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sortColor(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}