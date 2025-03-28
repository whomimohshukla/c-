#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    vector<int> input;

    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    stack<int> s;

    s.push(-1);

    for (int i = input.size() - 1; i >= 0; i--)
    {
        int curr = input[i];
        while (s.top() >= curr)
        {
            s.pop();
        }

        input[i] = s.top();
        s.push(curr);
    }

    for (int i = 0; i < input.size(); i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}
