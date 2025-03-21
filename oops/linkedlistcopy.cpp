#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
private:
    int data;
    Node *next;
    // Default constructor
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    // Parameterized constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
}