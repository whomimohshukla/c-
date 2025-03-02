#include<iostream>
using namespace std;

bool binarySearch(int arr[][4],int row,int col , int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return true;
            }

        }
    }
     return false; // Return false if the element is not found
}
int main()
{
    int arr[2][4]={{0,1,2,3},{4,5,6,7}};
    int row=2;
    int col=4;
    int key=5;
    
    if(binarySearch(arr,row,col,key)){
        cout<<"Element found in 2D array" <<endl;
    }
    else{
        cout<<"element not found in 2d array";
    }
 
  
}