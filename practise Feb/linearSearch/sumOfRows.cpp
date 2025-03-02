#include <iostream>
using namespace std;

void printRowWise(int arr[][3], int row, int col) {
    cout << "Print row sums:" << endl;
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j]; // Calculate row sum
        }
        cout << sum << endl; // Print sum of current row
    }
}

int main() {
    int arr[3][3]; // 3x3 matrix
    int row = 3, col = 3;

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j]; // Input matrix elements
        }
    }

    // Call the function to print row sums
    printRowWise(arr, row, col);

    return 0;
}
