#include<iostream>
using namespace std;

void swapNumbers(int* a, int* b) {
    int temp = *a; // Store the value of the first variable
    *a = *b;       // Assign the value of the second variable to the first variable
    *b = temp;     // Assign the stored value to the second variable
}
int main(){
    cout<<"enter first number:";
    int a;
    cin>>a;
    cout<<"enter second number:";
    int b;
    cin>>b;

    cout<<"A before swapiing: "<<a<<"  B before swaping :"<<b<<endl;

    swapNumbers(&a,&b);
    cout<<"A after swaping: "<<a<<" B after swaping :"<<b<<endl;
    return 0;
}