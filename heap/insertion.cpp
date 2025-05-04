#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Heap
{
public:
    int arr[101]; // 1-based indexing
    int size;

    Heap()
    {
        size = 0;
        arr[0] = -1; // Optional: dummy value at index 0
    }

    void insert(int value)
    {
        size += 1;
        int index = size;
        arr[index] = value;

        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Heap is empty!" << endl;
            return;
        }

        // Step 1: Replace root with last element
        arr[1] = arr[size];
        size--;

        // Step 2: Heapify-down from root
        int i = 1;
        while (i <= size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            int largest = i;

            if (left <= size && arr[left] > arr[largest])
            {
                largest = left;
            }

            if (right <= size && arr[right] > arr[largest])
            {
                largest = right;
            }

            if (largest != i)
            {
                swap(arr[i], arr[largest]);
                i = largest;
            }
            else
            {
                break;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap h;
    h.insert(50);
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(5);
    h.insert(60);

    cout << "Max Heap: ";
    h.print(); // Output should show a Max-Heap

    cout << "After deleting root: ";
    h.deleteFromHeap();
    h.print(); // Root (max element) should be removed
}
