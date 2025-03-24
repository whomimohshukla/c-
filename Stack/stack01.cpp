#include <iostream>
#include <stack>
using namespace std;
int main()
{

    // // creation of stack
    // stack<int> st;

    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);

    // // check element on top
    // cout << "Element on top is: " << st.top() << endl;

    // // size of stack
    // cout << "Size of stack is: " << st.size() << endl;

    // // check if stack is empty or not
    // if (st.empty())
    // {
    //     cout << "Stack is empty" << endl;
    // }
    // else
    // {
    //     cout << "Stack is not empty" << endl;
    // }

    // return 0;

    // print the stack
    // Create a stack
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Print and empty the stack
    cout << "Stack elements: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
