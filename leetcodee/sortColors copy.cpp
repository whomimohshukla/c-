#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortColor(vector<int>&arr){
    int low=0;
    int medium=0;
    int high=arr.size()-1;

    while(medium<=high){

        if(arr[medium]==0){
            swap(arr[low],arr[medium]);
            low++;
            medium++;
        }
        else if (arr[medium]==1)
        {
            medium++;
        }
        else{
            swap(arr[medium],arr[high]);
            high--;

        }
        

    }

    
}
int main()
{    vector<int> arr{2, 0, 2, 1, 1, 0};
     sortColor(arr); // Call function to sort

    // Print sorted array
    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}