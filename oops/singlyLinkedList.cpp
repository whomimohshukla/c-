#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// class

class Node
{
public:
    int data;
    Node *next;

    // constructor
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


void insertionAthead(Node * &head,int data){

    Node* newNode=new Node(data);

    newNode->next=head;

    head=newNode;

}

void insertionAtTail(Node * &head,int data){


}
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}



int main()
{
    Node *head = NULL;
    insertionAthead(head, 10);
    insertionAthead(head, 20);
    insertionAthead(head, 30);
    insertionAthead(head, 40);
    print(head);
    return 0;
}