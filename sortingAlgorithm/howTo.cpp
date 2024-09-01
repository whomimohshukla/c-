#include<iostream>
using namespace std;
void merge(int arr[],int start,int end,int mid){

    int length1=mid-start+1;
    int length2=end-mid;
    // creating one array (dynamic array) of length length1 and named left
    int*left=new int[length1];
    // creating one array (dynamic array) of length length2 and named right
    int*right=new int[length2];
    // copying data from arr[start] to arr[mid] to left array
    int k=start;
    for(int i=0;i<length1;i++){
        left[i]=arr[k];
        k++;

    }
    // copying data from arr[mid+1] to arr[end] to right array
    int k1=mid+1;
    for(int i=0;i<length2;i++){
        right[i]=arr[k1];
        k1++;
    }
    // merging left and right array
    int startIngIndexOfLeft=0;
    int startIngIndexOfRight=0;
    int startIngIndexOfMergedArray=start;
    while(startIngIndexOfLeft<length1 && startIngIndexOfRight<length2){
        if(left[startIngIndexOfLeft]<=right[startIngIndexOfRight]){
            arr[startIngIndexOfMergedArray++]=left[startIngIndexOfLeft++];
        }
        else{
            arr[startIngIndexOfMergedArray++]=right[startIngIndexOfRight++];
        }
    }
    // copying remaining elements of left array to arr
    while(startIngIndexOfLeft<length1){
        arr[startIngIndexOfMergedArray++]=left[startIngIndexOfLeft++];
    }
    // copying remaining elements of right array to arr
    while(startIngIndexOfRight<length2){
        arr[startIngIndexOfMergedArray++]=right[startIngIndexOfRight++];
    }
    delete[]left;
    delete[]right;

}
void mergeSort(int arr[],int start, int end){
    // base case 
    if(start>=end)  return ;

    // find the mid    
    int mid=(start+end)/2;

    // divide the original array into subarrays (left)
    mergeSort(arr,start,mid);
    // divide the original array into subarrays (right)
    mergeSort(arr,mid+1,end);
    // merge the subarrays (left and right)
    merge(arr,start,end,mid);
   

}
int main(){
    int arr[]={ 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr)/sizeof(arr[0]);

    int start=0;
    int end=n-1;

    mergeSort(arr,start,end);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}