#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node() {
    this->data = 0;
    this->next = NULL;
  }
  Node(int value) {
    this->data = value;
    this->next = NULL;
  }
};

// Function to print the linked list
void printList(Node *node) {
  while (node != NULL) {
    cout << node->data << " -> ";
    node = node->next;
  }
  cout << "NULL" << endl;
}

int main() {
  // Creating nodes
  Node *first = new Node(1);
  Node *second = new Node(2);
  Node *third = new Node(3);
  Node *fourth = new Node(4);
  Node *fifth = new Node(5);

  // Linking the nodes
  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;

  // Print the linked list
  printList(first);

  return 0;
}
