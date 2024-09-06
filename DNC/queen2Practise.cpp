#include<iostream>
#include<vector>
using namespace std;
void printSolution( vector<vector<int>> &board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (board[i][j]==1)
            {
               cout<<"* ";
            }
            else{
                cout<<"- ";
            }
        }
         cout << endl;
    }
     cout << endl;
}

void solve( vector<vector<int>> &board,int column,int n){
    // base case 
    if (column>=n)
    {
       printSolution(board, n);
        return;
    }
    
    // one case 

}
int main(){
 int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));

    int column=0;

    solve(board, column, n);  // Start solving from the first column
    return 0;
}