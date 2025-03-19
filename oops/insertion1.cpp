#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};

//insertion at  head


void insertion(Node* &head,int data){

//   step-1  //make a new node 
    Node*newNode=new Node(data);
    //step-2  make new node next to head 
    newNode->next=head;
    
    // step-3 make new node head
    head=newNode;

    }



void print(Node * head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
    
}
int main()
{
    Node *head=NULL;
    insertion(head,20);
    insertion(head,30);
    insertion(head,40);
    insertion(head,50);

    print(head);
 return 0;
}