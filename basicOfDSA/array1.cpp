#include <iostream>
using namespace std;

int main(){
    // int arr[4]={1,2,3,4};
    // int brr[10]={1,2,3,4};
    // // int arr[4]={1,2,3,4,6,7,9};  // >>error
    


    int arr[500];
    int n;
    cout << "enter a number";
    cin >> n;


    for (int i = 0; i <n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    cout <<"Double";
    for (int i = 0; i < n; i++){
        cout<<2*arr[i]<<" ";
    }
    




    


    return 0;

}