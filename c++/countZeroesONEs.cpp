#include<iostream>
using namespace std;

int main(){
    int arr[]={1,0,0,1,0,1,0,0,1,0};
    int size=10;

    int numZeroes=0;
    int numOnes=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
           numZeroes++;
        }
        if (arr[i]==1)
        {
            numOnes++;
        }
        

        
    }
    cout<<"Number of zeroes: "<<numZeroes<<endl;
    cout<<"Number of ones: "<<numOnes<<endl;
    return 0;
 
}