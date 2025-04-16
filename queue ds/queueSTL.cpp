#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "length of queue is:" << q.size() << endl;

    if (q.empty())
    {
        cout << "queue is empty " << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }
}