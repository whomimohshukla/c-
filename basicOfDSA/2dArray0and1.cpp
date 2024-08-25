#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

int main() {
    int array[3][3]={{1,0,0},{0,0,0},{1,1,1}};
    int rows=3;
    int cols=3;
   int  numOnes=0;
   int numZeroes=0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (array[i][j] == 1){
                numOnes++;

            }
            if (array[i][j]==0)
            {
               numZeroes++;
            }  
        }
        
    }
    cout<<"number of zeroes is:"<<numZeroes<<"number of ones is:"<<numOnes;
    
   
    return 0;
}
