#include <iostream>

using namespace std;

void transpose(int arr[][3], int row, int col) {
    int temp[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            temp[j][i] = arr[i][j]; // Note the switch in indexing
        }
    }
    // Copy the transposed values back into the original array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = temp[i][j];
        }
    }
}

void printingArray(int arr[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;

    // Output the elements of the array
    cout << "The 3x3 matrix is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // Print a new line at the end of each row
    }

    transpose(arr, row, col);

    cout << "The transposed matrix is:" << endl;
    printingArray(arr, row, col);

    return 0;
}
