#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(100);
    pq.push(90);
    pq.push(70);

    cout << "top element of min heap:" << pq.top() << endl;
    pq.pop();
    cout << "size of min heap:" << pq.size() << endl;

    if (pq.empty())
    {
        cout << "empty heap" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }
    
    return 0;
}