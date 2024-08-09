#include<iostream>
using namespace std;

int getEVenSum(int n){
    int sum = 0;
    // for(int i = 2; i <= n; i=i+2){
    //     sum += i;
    //     }
    for (int i = 0; i <=n; i++)
    {
        /* code */
        if(i%2==0){
            sum += i;
            }
            
    }
    
        return sum;


}

int main(){
    int n;
    cout <<"Enter a number :";
    cin >> n;
    cout << "the getEVenSum of n numbers is :" << getEVenSum(n) << endl;

}