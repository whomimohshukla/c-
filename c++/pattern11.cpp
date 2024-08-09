#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < (n-row-1); col++)
        {
            cout<<" ";
        }
        for (int col = 0; col < row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //inverted

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
