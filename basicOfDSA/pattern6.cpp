#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"enter total number of rows:";
    cin >> n;
    for (int rows = 0; rows < n; rows++)
    {
        /* code */
        for (int columns = 1; columns < rows+1; columns++){
            cout <<columns;

        }
        cout <<endl;
    }
    
}