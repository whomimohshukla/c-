#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target){
    //whomimohshukla
    
    int start=matrix.size();
}

int main(){
    
    vector<vector<int>> matrix{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int target=8;
    bool ans= searchMatrix( matrix, target);

    if (ans)
    {
        cout << "Element is present in the matrix" << endl;
    }
    else{
        cout << "Element is not present in the matrix" << endl;
    }

    
   
    return 0;
}