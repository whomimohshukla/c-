#include<iostream>
#include<climits>
using namespace std;
void findMaximum(int arr[],int n,int i,int &max){
    if (i>=n)
    {
       return ;
    }
    if (arr[i]>max)
    {
        max=arr[i];
    }
    return findMaximum(arr,n,i+1,max);

}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int i=0;
    findMaximum(arr,n,i,max);

    cout<<"the maximum number in array:"<<max<<" ";
    return 0;
}