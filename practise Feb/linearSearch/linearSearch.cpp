#include<iostream>
using namespace std;
bool findtheElement(int arr[],int key,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main()
{
   int arr[] = {1, 2, 3, 4, 5};
   int size = sizeof(arr) / sizeof(arr[0]);
   int key;
   cout<<"Enter the key to find in array :";
   cin>>key;
   if(findtheElement(arr,key,size)){
    cout<<"element is present"<<endl;
   }
   else{
    cout<<"element is not found in array"<<endl;
   }

 return 0;
}