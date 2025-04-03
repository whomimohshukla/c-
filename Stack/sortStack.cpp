#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &s, int target)
{
    // Base case: If the stack is empty or top element is smaller
    if (s.empty() || s.top() <= target)
    {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

   
    insertSorted(s, target);

    s.push(topElement);
}


void sortStack(stack<int> &s)
{
    // Base case: If the stack is empty
    if (s.empty())
    {
        return;
    }

    int topElement = s.top();
    s.pop();

    // Recursively sort remaining stack
    sortStack(s);

    // Insert the top element in sorted order
    insertSorted(s, topElement);
}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(19);
    s.push(14);

    // Sort the stack
    sortStack(s);

    // Printing the sorted stack (in descending order)
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
