#include<iostream>
using namespace std;

void merge(int* arr,int start,int end){
    int mid=(start+end)/2;

    int length1=mid-start+1;
    int length2=end-mid;
    // creating one array (dynamic array) of length length1 and named left
    int*left=new int[length1];
    // creating one array (dynamic array) of length length2 and named right
    int*right=new int[length2];

    //copying values

    int k=start;
    for(int i=0;i<length1;i++){
        left[i]=arr[k];
        k++;
    }



}
int mergeSOrt(int* arr,int start,int end){
    // base case 
    if(start>=end){
        return 0;
    }
    int mid=(start+end)/2;

    // left side of array handling by recursion
    mergeSOrt(arr,start,mid);

    // right side will wehandle recursively itself
    mergeSOrt(arr,mid+1,end);

    //merge to sorted array which is divide later before 
    merge(arr,start,end);
}
int main(){
    int arr[]={4,5,13,2,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;

    mergeSOrt(arr,start,end);

    return 0;
}