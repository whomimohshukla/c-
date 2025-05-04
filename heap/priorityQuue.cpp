#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    cout << "top element of heap is :" << pq.top() << endl;

    pq.pop();
    cout << "top element of heap is :" << pq.top() << endl;

    if (pq.empty())
    {
        cout << "empty heap" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }
}