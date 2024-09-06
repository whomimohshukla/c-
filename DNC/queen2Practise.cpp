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

bool isSafe(int row,int  column,  vector<vector<int>> &board, int n){

    // left check
    int i=row;
    int j=column;
    

    // Check row on the left side
    while (j >= 0) {
        if (board[i][j] == 1) {
            return false;
        }
        j--;
    }
    // Check upper diagonal on the left side
     // Check upper left diagonal
    i = row;
    j = column;
    while (i >= 0 && j >= 0) {
        if (board[i][j] == 1) {
            return false;
        }
        i--;
        j--;
    }
    // Check lower diagonal on the left side
    i = row;
    j = column;
    while (i < n && j >= 0) {
        if (board[i][j] == 1) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve( vector<vector<int>> &board,int column,int n){
    // base case 
    if (column>=n)
    {
       printSolution(board, n);
        return;
    }
    
    // one case 
     // Try placing the queen in all rows one by one
    for (int row = 0; row < n; row++) {
        if (isSafe(row, column, board, n)) {
            board[row][column] = 1;  // Place the queen
            solve(board, column + 1, n);  // Recur to place rest of the queens
            board[row][column] = 0;  // Backtrack and remove the queen
        }
    }

}
int main(){
 int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));

    int column=0;

    solve(board, column, n);  // Start solving from the first column
    return 0;
}