#include<iostream>
using namespace std;
int main(){

   int arr[5] = { 1, 2, 3, 4, 5 }; 
    int* ptr = arr; 
  
   cout<<arr<<endl;
   cout<<&arr<<endl;
   cout<<&arr[0]<<endl;
   cout<<*arr<<endl;
   cout<<ptr<<endl;
   cout<<&ptr<<endl;
   cout<<*ptr<<endl;

    return 0;
}