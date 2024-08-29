#include<iostream>
using namespace std;
void  printArr(int arr[],int n,int i){
    if(i>=n){
        return;
    }
    
    printArr(arr,n,i+1);
    cout<<arr[i]<<" ";

}
int main(){
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    printArr(arr,n,i);
    return 0;
}