#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int row, int col) {
    cout << "Printing sum row-wise:" << endl;
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
}

int main() {
    int arr[3][3];
    int row = 3;
    int col = 3;

    // Input the elements of the array
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Output the elements of the array
    cout << "The 3x3 matrix is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // Print a new line at the end of each row
    }

    // Print row-wise sum
    printRowWiseSum(arr, row, col);

    return 0;
}
