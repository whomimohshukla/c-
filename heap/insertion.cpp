#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Heap {
public:
    int arr[101];  // 1-based indexing
    int size;

    Heap() {
        size = 0;
        arr[0] = -1; // Optional: dummy value at index 0
    }

    void insert(int value) {
        size += 1;
        int index = size;
        arr[index] = value;

        while (index > 1) {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex]) {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap h;
    h.insert(50);
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(5);
    h.insert(60);

    cout << "Max Heap: ";
    h.print(); // Expected output: 60 30 50 10 5 40
}
