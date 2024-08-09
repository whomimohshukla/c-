#include <iostream>
using namespace std;

void printName(){
    cout << "My name is " << "Sergio" << endl;

}
void addTWo(int a,int b){
    int c=a+b;
    cout << "The sum is " << c << endl;


}

void greaterNumber(int a,int b,int c){
    if(a>b && a>c){
        cout << "The greater number is " << a << endl;
    }
    if (b>a && b>c){
        cout << "The greater number is " << b << endl;
    }
    if (c>a && c>b){
        cout << "The greater number is " << c << endl;
        }

  
    
}
void countNumbers(int n){
    for (int i = 0; i <=n; i++)
    {
        cout<<i;
    }
    cout <<endl;
    
}

void dayOfWeek(int n){
    switch (n){
        case 1:
        cout << "Monday" << endl;
        break;
        case 2:
        cout << "Tuesday" << endl;
        break;
        case 3:
        cout << "Wednesday" << endl;
        break;
        case 4:
        cout << "Thursday" << endl;
        break;
        case 5:
        cout << "Friday" << endl;
        break;
        case 6:
        cout << "Saturday" << endl;
        break;
        case 7:
        cout << "Sunday" << endl;
        break;
        default:
        cout << "Invalid day" << endl;
        break;

        }
        
    }
    






int main(){
    printName();
    addTWo(2,3);
    greaterNumber(10,20,30);
    countNumbers(10);
    dayOfWeek(1);
    

    return 0;
    
}

