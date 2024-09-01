#include<iostream>
using namespace std;
void merge(int arr[],int start,int end,int mid){

    // finding the subArray size
    int length1 = mid - start + 1;
    int length2 = end - mid;

    // creating one array (dynamic array) of length length1 and named left
    int*left=new int[length1];
    // creating one array (dynamic array) of length length2 and named right
    int*right=new int[length2];


    //copying the values

    int k=start;
    for(int i=0;i<length1;i++){
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<length2;i++){
        right[i]=arr[k];
        k++;
    }

    int indexOfLeft=0;
    int indexOfRight=0;
    int indexOfOriginal=start;
    // merging the two arrays
    while(indexOfLeft<length1 && indexOfRight<length2){
        

   


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