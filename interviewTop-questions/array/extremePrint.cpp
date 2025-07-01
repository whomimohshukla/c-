#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80, 90};

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start] << " "; // middle element (when odd number of elements)
        }
        else
        {
            cout << arr[start] << " " << arr[end] << " ";
        }
        start++;
        end--;
    }
    return 0;
}