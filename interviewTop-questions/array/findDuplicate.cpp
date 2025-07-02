#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr{1, 3, 4, 2, 2};

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            cout << "Duplicate number is: " << arr[i] << endl;
        }
    }

    return 0;
}
