#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool linearSearch(vector<int> &arr, int key)
{

    int size = arr.size();

    for (int i = 0; i <= arr.size(); i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> arr{1, 2, 3, 44, 5, 6};

    int key = 22;

    bool ans = linearSearch(arr, key);

    if (ans)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found in array"<<endl;
    }
    return 0;
}