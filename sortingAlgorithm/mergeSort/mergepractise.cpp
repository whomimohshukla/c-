#include<iostream>
using namespace std;
void merge(int arr[], int start, int mid , int end){

    int length1=mid-start+1;
    int length2=end-mid;
// creating one array (dynamic array) of length length1 and named left
    int*left=new int[length1];
    // creating one array (dynamic array) of length length2 and named right
    int*right=new int[length2];
    // copying data from arr[start] to left array
    int k=start;
    for(int i=0;i<length1;i++)
    {
        left[i]=arr[k];
        k++;
    }
    // copying data from arr[mid+1] to right array
    k=mid+1;
    for(int i=0;i<length2;i++){
        right[i]=arr[k];
        k++;

    }
    // merging the left and right array
    int i=0,j=0,mergedArrayIndex=start;
    while(i<length1 && j<length2){
        if(left[i]<=right[j]){
            arr[mergedArrayIndex++]=left[i++];
        }
        else{
            arr[mergedArrayIndex++]=right[j++];
        }
    }
    // copying remaining elements of left array if any
    while(i<length1){
        arr[mergedArrayIndex++]=left[i++];

    }
    // copying remaining elements of right array if any
    while(j<length2){
        arr[mergedArrayIndex++]=right[j++];
        }
}
void mergeSort(int arr[],int start,int end){
    // base case 
    if(start>=end){
        return;
    }

    // mid 
    int mid=(start+end)/2;

    // left array
    mergeSort(arr,start,mid);
    // right array divideation
    mergeSort(arr,mid+1,end);
    // merge two sorted array which are divided later 
    merge(arr,start,mid,end);


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
    // return 0;
    return 0;
}