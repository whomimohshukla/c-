#include<iostream>
using namespace std;

int main(){



    for (int i = 0; i < 3; i++)
    {
        if (i==0||i==2)
        {
            for (int j = 0; j < 5; j++)
            {
                /* code */
                cout << "*";
            }
            
        }
        else
        {
            
            cout <<"*";
            for (int space = 0; space < 3; space++)
            {
                cout << " ";
            }
            cout << "*";
            
        }
        cout << endl;
        
        
    }
  
    
}