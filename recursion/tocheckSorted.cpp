#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isSorted(vector<int>arr,int index,int sizeOfArray){
    // base condition 
    if(index==sizeOfArray-1){
        return true;
    }
    // if current element is greater than next element then return false
    if(arr[index]>arr[index+1]){
        return false;
    }
   return isSorted(arr,index+1,sizeOfArray);


}
int main(){

    vector<int>arr{10,49,54,2,3,4,890};

    int sizeoFArray=arr.size();
    int index=0;


    bool ans=isSorted(arr,index,sizeoFArray);

    if (ans)
    {
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }
    
   
    

    return 0;
}