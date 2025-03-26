#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of the stack
void solve(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();
    solve(s, target);
    s.push(topElement);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    if (s.empty())
    {
        cout << "Stack is empty" << endl;
        return 0;
    }

    // Taking the top element and inserting it at the bottom
    int target = s.top();
    s.pop();
    solve(s, target);

    // Create a copy to print without modifying the original stack
    stack<int> temp = s;

    // Printing the modified stack
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
