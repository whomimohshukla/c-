#include <iostream>
using namespace std;

bool linearSearch(int arr[][3], int row, int col,int key){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == key){
                return true;
            }
    
        }
    }
       return false;
}


int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    int key;
    cout <<"enter a key";
    cin >> key;



    // Output the elements of the array
    cout << "The 3x3 matrix is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // Print a new line at the end of each row
    }

    // Print row-wise sum
    cout <<linearSearch(arr, row, col,key);

    return 0;
}
