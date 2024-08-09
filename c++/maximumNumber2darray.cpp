#include <iostream>
#include <climits>
using namespace std;

void findMaximumAndMinimum(int arr[][3], int rows, int cols, int &maxi, int &mini) {
    maxi = INT_MIN;
    mini = INT_MAX;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxi) {
                maxi = arr[i][j];
            }
            if (arr[i][j] < mini) {
                mini = arr[i][j];
            }
        }
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

    int maxi, mini;
    findMaximumAndMinimum(arr, row, col, maxi, mini);

    cout << "The maximum number in the 2D array is: " << maxi << endl;
    cout << "The minimum number in the 2D array is: " << mini << endl;

    return 0;
}
