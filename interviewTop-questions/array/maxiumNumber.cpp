#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr{1,2,30,4,5,6};

    int maximumNum=arr[0];

    for(int i=0;i<arr.size();i++){
        if(arr[i]>maximumNum){
            maximumNum=arr[i];
        }
    }

    cout<<"Maximum number is :"<<maximumNum<<endl;
 return 0;
}