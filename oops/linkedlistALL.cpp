#include <iostream>
using namespace std;

class Node
{
public:
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

// Function to insert at the head
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // Check if linked list is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Create a new node
    Node *newNode = new Node(data);

    // Make the new node point to head
    newNode->next = head;

    // Update the head
    head = newNode;
}

// Function to insert at the tail
void insertAtTail(Node *&head, Node *&tail, int data)
{
    // Check if linked list is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Create a new node
    Node *newNode = new Node(data);

    // Connect the new node to the tail
    tail->next = newNode;

    // Update the tail
    tail = newNode;
}

// Function to insert at a specific position
void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    // Insert at the head if position is 0
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    // Create a new node
    Node *newNode = new Node(data);

    // Traverse to the position before insertion point
    Node *temp = head;
    int count = 0;

    while (temp != NULL && count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // If position is out of bounds, insert at the end
    if (temp == NULL)
    {
        cout << "Position out of bounds. Inserting at tail." << endl;
        insertAtTail(head, tail, data);
        return;
    }

    // Insert at the last position (update tail if necessary)
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    // Standard insertion in the middle
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to print the linked list
void print(Node *head)
{
    cout << "Head -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Insert elements at the head
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);

    // Insert elements at the tail
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);

    // Insert at a specific position
    insertAtPosition(head, tail, 25, 2); // Insert at position 2
    insertAtPosition(head, tail, 70, 10); // Position out of bounds, inserts at tail
    insertAtPosition(head, tail, 5, 0);   // Insert at head

    // Print the linked list
    print(head);

    return 0;
}
