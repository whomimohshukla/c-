#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void moveNegative(vector<int>&arr){
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        if(arr[start]<0){
            start++;
        }
        else if (arr[end]>0)
        {
            end--;
        }

        else{
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        
    }
}
int main()
{
 vector<int>arr{1,2,-3,4,-5,6};

 moveNegative(arr); // Call function to sort

 // Print sorted array
    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}