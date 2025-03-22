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

// Wrapper function to reverse the list
Node *getMiddle(Node *&head)
{
    if (head == NULL)
    {
        return head;
    }

    if (head->next == NULL)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
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

    // Get and print the middle node
    Node *Middle = getMiddle(Head);
    if (Middle != NULL)
    {
        cout << "Middle Node: " << Middle->data << endl;
    }
    else
    {
        cout << "List is empty." << endl;
    }

    return 0;
}
