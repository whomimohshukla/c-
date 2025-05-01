#include <iostream>
#include <climits>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertINBST(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insertINBST(root->left, data);
    } else {
        root->right = insertINBST(root->right, data);
    }
    return root;
}

bool solveValidateBST(Node* root, long long int lowerBound, long long int upperBound) {
    if (root == NULL) {
        return true;
    }

    if (root->data <= lowerBound || root->data >= upperBound) {
        return false;
    }

    return solveValidateBST(root->left, lowerBound, root->data) &&
           solveValidateBST(root->right, root->data, upperBound);
}

bool validateBST(Node* root) {
    return solveValidateBST(root, LLONG_MIN, LLONG_MAX);
}

int main() {
    Node* root = NULL;
    root = insertINBST(root, 50);
    insertINBST(root, 30);
    insertINBST(root, 70);
    insertINBST(root, 20);
    insertINBST(root, 40);
    insertINBST(root, 60);
    insertINBST(root, 80);

    if (validateBST(root)) {
        cout << "Valid BST" << endl;
    } else {
        cout << "Invalid BST" << endl;
    }

    return 0;
}
