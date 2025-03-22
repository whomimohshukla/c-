#include <iostream>
#include <vector>
#include <algorithm>
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

//print function

void print(Node* &Head){

    Node* temp=Head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
         temp = temp->next;
    }
    

}
int main()
{

    Node * First=new Node(10);
    Node * Second=new Node(20);
    Node * Third=new Node(30);
    Node * Fourth=new Node(40);
    Node * Fifth=new Node(50);

    First->next=Second;
    Second->next=Third;
    Third->next=Fourth;
    Fourth->next=Fifth;

    print(First);
}