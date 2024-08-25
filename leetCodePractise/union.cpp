#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int sizeA = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {7, 8, 9, 10, 11, 12};
    int sizeB = sizeof(arr2) / sizeof(arr2[0]);

    set<int> ans;

    // Insert elements from the first array into the set
    for (int i = 0; i < sizeA; i++) {
        ans.insert(arr1[i]);
    }

    // Insert elements from the second array into the set
    for (int j = 0; j < sizeB; j++) {
        ans.insert(arr2[j]);
    }

    // Print the elements of the set
    cout << "Elements in the union of the two arrays:" << endl;
    for (const int& element : ans) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
