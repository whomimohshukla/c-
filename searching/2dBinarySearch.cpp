#include <iostream>
#include <vector>

using namespace std;
int twoDsearchUsingBinary(int arr[][5], int rows, int cols, int target) {
  int start = 0;
  int totalSize = rows * cols;
  int end = totalSize - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    int rowIndex = mid / cols;
    int colsIndex = mid % cols;
    int element = arr[rowIndex][colsIndex];
    if (element == target) {
      cout << "element found at:" << " rows  :" << rowIndex
           << " cols: " << colsIndex;

      return true;
    }
    if (element < target) {
      start = mid + 1;

    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return false;
}

int main() {
  int arr[4][5] = {{1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 10},
                   {11, 12, 13, 14, 15},
                   {16, 17, 18, 19, 20}};
  int rows = 4;
  int cols = 5;
  int target = 16;
  int ans = twoDsearchUsingBinary(arr, rows, cols, target);

  return 0;
}
