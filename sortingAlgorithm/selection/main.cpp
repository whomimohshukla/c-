#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void swaping(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
    return ;
    

}
void selectionSort(vector<int>&arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int minIndex=i;
        for(int j = i + 1; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
       swaping(i,minIndex);

    }


}
int main(){
    vector<int>arr{12,29,25,8,32,17,40};
    selectionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}