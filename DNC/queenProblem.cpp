#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<int>>& board, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1) {
                cout << "Q ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }
    cout << endl;  // To separate different solutions
}

bool isSafe(int row, int col, vector<vector<int>>& board, int n) {
    int i = row;
    int j = col;

    // Check row on the left side
    while (j >= 0) {
        if (board[i][j] == 1) {
            return false;
        }
        j--;
    }

    // Check upper left diagonal
    i = row;
    j = col;
    while (i >= 0 && j >= 0) {
        if (board[i][j] == 1) {
            return false;
        }
        i--;
        j--;
    }

    // Check lower left diagonal
    i = row;
    j = col;
    while (i < n && j >= 0) {
        if (board[i][j] == 1) {
            return false;
        }
        i++;
        j--;
    }

    // Safe to place queen
    return true;
}

void solve(vector<vector<int>>& board, int col, int n) {
    // Base case: All queens are placed
    if (col >= n) {
        printSolution(board, n);
        return;
    }

    // Try placing the queen in all rows one by one
    for (int row = 0; row < n; row++) {
        if (isSafe(row, col, board, n)) {
            board[row][col] = 1;  // Place the queen
            solve(board, col + 1, n);  // Recur to place rest of the queens
            board[row][col] = 0;  // Backtrack and remove the queen
        }
    }
}

int main() {
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));

    solve(board, 0, n);  // Start solving from the first column

    return 0;
}
