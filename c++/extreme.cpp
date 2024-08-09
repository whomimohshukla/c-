#include <iostream>

using namespace std;

int main() {
    int arr[]={10,20,40,70,90,30,50,100};
    int size=8;
    int start=0;
    int end=size-1;

    while (true)
    {
       if (start>end)
       break;

       if (start==end)
       {
        cout<<arr[start]<<" ";
       }
       else
       {
        cout<<arr[start]<<" "<<arr[end]<<" ";
       }

       start++;
       end--;
       
       

  
       
    }
    


    return 0;
}
