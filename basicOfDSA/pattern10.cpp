#include <iostream>

using namespace std;
int main(){
    int n;
    cout <<"enter a number:";
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        // for space 
        for (int i = 0; i < row; i++)

        {
            cout << " ";
        }
        for (int i = 0; i < n-row; i++)
        {
            cout << "* ";
        }
        cout << endl;
        
       
    }
    
}