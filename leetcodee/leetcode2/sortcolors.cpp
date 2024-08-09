#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr{2, 0, 2, 1, 1, 0};
    int l = 0, m = 0, h = arr.size() - 1;

    while (m <= h) {
        if (arr[m] == 0) {
            swap(arr[l], arr[m]);
            l++;
            m++;
        } else if (arr[m] == 1) {
            m++;
        } else {
            swap(arr[m], arr[h]);
            h--;
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
