#include<iostream>
using namespace std;

bool findTheElement(int arr[],int key,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
            }
            
    }
return false;

}

int main(){
    int arr[5]={1,32,4,5,7,};
    int size=5;

    cout <<"enter a key to search" <<endl;
    int key;
    cin>>key;
    if (findTheElement(arr,key, size))
    {
        cout<<"Element is present in array"<<endl;
        
    }
    else
    {
        cout<<"Element is not present in array"<<endl;
    }
    
    

}