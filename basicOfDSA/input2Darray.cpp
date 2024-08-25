#include <iostream>
using namespace std;

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

    return 0;
}
