#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int element){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
while (start<=end)
{
   int elementFOund=arr[mid];
   if (elementFOund==element)
   {
    return mid;

   }
  else if (element<elementFOund)
  {
    end=mid-1;
  }
  else
  {
    start=mid+1;
  }
  mid=(start+end)/2;
  
  
   
}

return -1;
}

int main(){
    int arr[]={10,20,40,50,60,70};
    int size=6;
    int element=40;
    int targetFound=binarySearch(arr,size,element);
    if (targetFound==-1)
    {
        cout<<"Element is not present in array"<<endl;
    }
    else{
        cout<<"Element is present in array"<<endl;
    }  
}