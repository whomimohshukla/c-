#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    //choose pivot element 
    int pivotIndex=start;
    int pivotElement=arr[pivotIndex];
    
}
void quickSort(int arr[],int start,int end){
    // base case 
    if(start>=end) return;

    // partition logic return pivot
    int pivot = partition(arr,start,end);
    // recursive call on left and right subarray
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,end);


}
int main(){
   int arr[]={8,1,3,4,20,50,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start=0;
    int end=n-1;
    quickSort(arr,start,end);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}