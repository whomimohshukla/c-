#include <iostream>
#include <vector>
#include <algorithm>
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

int lengthOflinkedList(Node *Head)
{
    Node *temp = Head;

    int length = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

// insertion at head

void insertionAthead(Node *&Head, Node *&Tail, int data)
{

    if (Head == NULL)
    {
        Node *newNode = new Node(data);
        Head = newNode;
        Tail = newNode;
        return;
    }

    else
    {
        // step -1 create new node
        Node *newNode = new Node(data);

        // step-2 Point newnode next to head

        newNode->next = Head;

        // step-3

        Head->prev = newNode;

        // step-4

        Head = newNode;
    }
}

// insertion at tail

void insertionAtTail(Node *&Head, Node *&Tail, int data)
{
    if (Head == NULL)
    {
        Node *newNode = new Node(data);
        Head = newNode;
        Tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);

        Tail->next = newNode;
        newNode->prev = Tail;

        Tail = newNode;
    }
}

// insertion at position

void insertionAtPosition(Node *&Head, Node *&Tail, int data, int position)
{
    if (Head == NULL)
    {
        Node *newNode = new Node(data);
        Head = newNode;
        Tail = newNode;
    }

    else
    {

        if (position == 1)
        {
            insertionAthead(Head, Tail, data);
            return;
        }

        // Validate position before proceeding
        int length = lengthOflinkedList(Head);

        if (position > length + 1)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        // Insertion at end
        if (position == length + 1)
        {
            insertionAtTail(Head, Tail, data);
            return;
        }

        // Insertion at middle
        int i = 1;
        Node *prevNode = Head;

        while (i < position - 1)
        {
            prevNode = prevNode->next;
            i++;
        }

        Node *currNode = prevNode->next;
        Node *newNode = new Node(data);

        prevNode->next = newNode;
        newNode->prev = prevNode;

        if (currNode != NULL)
        {
            currNode->prev = newNode;
            newNode->next = currNode;
        }
        else
        {
            Tail = newNode; // Update tail if inserting at the end
        }
    }
}

void printDoubly(Node *Head)
{
    Node *temp = Head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *First = new Node(10);
    Node *Second = new Node(20);
    Node *Third = new Node(30);

    Node *Head = First;
    Node *Tail = Third;

    First->next = Second;
    Second->prev = First;

    Second->next = Third;
    Third->prev = Second;

    printDoubly(First);

    cout << endl;

    insertionAthead(Head, Tail, 101);
    printDoubly(Head);

    cout << endl;

    insertionAtTail(Head, Tail, 501);
    printDoubly(Head);

    cout << endl;

    insertionAtPosition(Head, Tail, 50, 2);
    printDoubly(Head);
}