#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class TreiNode
{
public:
    char data;
    TreiNode *children[26];
    bool isTerminal;

    TreiNode(char d)
    {
        this->data = d;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        this->isTerminal = false;
    }
};

void insertWord(TreiNode *&root, string word)
{
    // base case

    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    char ch = word[0];

    int index = ch - 'A';

    TreiNode *child;
    // if word is already present
    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    // not present
    else
    {
        child = new TreiNode(ch);
        root->children[index] = child;
    }

    //recursion 

    insertWord(child,word.substr(1));
}
int main()
{

    TreiNode *root = new TreiNode('-');
    insertWord(root, "loading");

    return 0;
}