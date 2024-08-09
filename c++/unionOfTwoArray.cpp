
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr1[]={1,2,3,4,5,6};
    int sizeA=6;
    int arr2[]={7,8,9,10,11};
    int sizeB=5;

    vector <int>ans;
    // push all elements
    for (int i = 0; i < sizeA; i++)
    {
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < sizeB; i++)
    {
        ans.push_back(arr2[i]);
    }
    cout <<"size of answer :"<<ans.size()<<endl;

    // printing the vector
    cout<<"printing the union array";
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";

    }
    



   
}