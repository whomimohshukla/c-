#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// Tree node definition
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};

// Helper class to return multiple values
class Info {
public:
    int maxVal;
    bool isHeap;

    Info(int m, bool h) {
        maxVal = m;
        isHeap = h;
    }
};

// Function to check if a binary tree is a max-heap
Info checkMaxHeap(TreeNode* root) {
    if (root == NULL) {
        return Info(INT_MIN, true);
    }

    if (root->left == NULL && root->right == NULL) {
        return Info(root->data, true);
    }

    Info leftAns = checkMaxHeap(root->left);
    Info rightAns = checkMaxHeap(root->right);

    bool condition = root->data > leftAns.maxVal &&
                     root->data > rightAns.maxVal &&
                     leftAns.isHeap && rightAns.isHeap;

    int currentMax = max(root->data, max(leftAns.maxVal, rightAns.maxVal));

    return Info(currentMax, condition);
}

int main() {
    // Example: Create a simple binary tree
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(6);

    Info result = checkMaxHeap(root);
    cout << (result.isHeap ? "Tree is a max-heap" : "Tree is NOT a max-heap") << endl;

    return 0;
}
