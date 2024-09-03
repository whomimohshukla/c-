#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    // choose pivot elements 
    int pivotIndex=start;
    int pivotElement=arr[pivotIndex];
    // find the best postion for pivot elements and place there

    int count =0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }
    // swap pivot elements with the element at the count position
    int rightIndex=start+count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex=rightIndex;
    // swap elements in the left and right subarray
    int i=start;
    int j=end;
    while (i<pivotIndex && j>pivotIndex)
    {
       while (arr[i]<pivotElement)
       {
         i++;
       }
       while (arr[j]>pivotElement)
       {
        j--;
       }

    }


    // two cases found either number can be swapped or not
       if(i<pivotIndex && j>pivotIndex){
        swap(arr[i],arr[j]);
       }


       return pivotIndex;
    

}
void quickSort(int arr[],int start,int end){
    //base case
    if(start>=end) return;

    // partition logic return pivot

    int p=partition(arr,start,end);

    //pivot element >>left elements
    quickSort(arr,start,p-1);

    //pivot elements >>right elements
    quickSort(arr,p+1,end);



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