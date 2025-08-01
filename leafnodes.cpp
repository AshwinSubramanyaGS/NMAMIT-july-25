#include <iostream>
using namespace std;

// Structure for a tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to print all leaf nodes
void printLeafNodes(Node* root) {
    if(root==nullptr)return ;
    if(root->left==nullptr&&root->right==nullptr){
        cout<<root->data<<" ";
        return;
    
    }
    if(root->left!=nullptr)printLeafNodes(root->left);
    if(root->right!=nullptr)printLeafNodes(root->right);
    }

// Example usage
int main() {
    /*
           1
          / \
         2   3
        / \   \
       4   5   6
                  \
                   7
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->right->right = new Node(7);

    cout << "Leaf nodes in the tree are: ";
    printLeafNodes(root);
    cout << endl;

    return 0;
}
