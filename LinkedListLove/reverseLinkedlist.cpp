#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Recursive function to reverse the doubly linked list
Node *reverse(Node *&prev, Node *&curr)
{
    if (curr == NULL)
    {
        return prev;
    }
    Node *forward = curr->next;
    // Swap prev and next pointers
    curr->next = prev;
    return reverse(curr, forward);
}

// Wrapper function to reverse the list
Node *reverseList(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    head = reverse(prev, curr);
    return head;
}

// Function to print the linked list
void printLinked(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // Creating nodes
    Node *First = new Node(10);
    Node *Second = new Node(20);
    Node *Third = new Node(30);

    // Setting Head and Tail
    Node *Head = First;
    Node *Tail = Third;

    // Linking the nodes
    First->next = Second;
    Second->prev = First;

    Second->next = Third;
    Third->prev = Second;

    // Print original list
    cout << "Original List: ";
    printLinked(Head);

    // Reverse the list using recursion
    Head = reverseList(Head);

    // Print reversed list
    cout << "Reversed List: ";
    printLinked(Head);

    return 0;
}
