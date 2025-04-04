#include<iostream>
using namespace std;

void swapByPointer(int *a,int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
}
int main()
{
    int a = 5, b = 10;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swapByPointer(&a, &b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;


 return 0;
}