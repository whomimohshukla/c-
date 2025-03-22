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

int getLength(Node *&head)
{

    int length = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *reverseKGroup(Node *head, int k)
{

    if (head == NULL)
    {
        return NULL;
    }

    // check if length of linked list is smaller than k

    int length = getLength(head);
    if (length < k)
    {
        return head;
    }

    // it ensure that linked list has more than one nodes

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    int count = 0;

    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if(forward!=NULL){
        head->next=reverseKGroup(forward,k);
    }
    return prev;
}

int main()
{
    // Creating nodes
    Node *First = new Node(1);
    Node *Second = new Node(2);
    Node *Third = new Node(3);
    Node *Fourth = new Node(4);
    Node *Fifth = new Node(5);

    // Setting Head
    Node *Head = First;

    // Linking nodes
    First->next = Second;
    Second->prev = First;

    Second->next = Third;
    Third->prev = Second;

    Third->next = Fourth;
    Fourth->prev = Third;

    Fourth->next = Fifth;
    Fifth->prev = Fourth;

    // Print original linked list
    cout << "Original List: ";
    print(Head);

    // Reverse the list in groups of k
    int k = 2;
    Head = reverseKGroup(Head, k);

    // Print reversed linked list
    cout << "Reversed List in Groups of " << k << ": ";
    print(Head);
}