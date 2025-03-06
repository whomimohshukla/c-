#include<iostream>
using namespace std;

void findmissing(int arr[],int size){
    int i=0;
    while(i<size){
        int index=arr[i]-1;
        if(arr[i]!=arr[index]){
            swap(arr[i],arr[index]);
        }
        else{
            ++i;
        }
    }

   
    
    for(int i=0;i<size;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
};
int main()
{

    int arr[]={1,3,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    findmissing(arr,size);
 
}