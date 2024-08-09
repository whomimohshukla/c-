#include<iostream>
using namespace std;

int main(){
    int arr[5]={10,20,30,40,50};
    int size=5;
    int key;

    cout <<"enter a element(key) for search:";
    cin >>key;

    bool flag=0;



    for (int i = 0; i < size; i++)
    {
       if (arr[i] == key){
        flag=1;

       }
    }
    if (flag)
    {
        cout << "Element is present in array";
    }
    else
    {
        cout << "Element is not present in array";
        }
        return 0;
    
    





}