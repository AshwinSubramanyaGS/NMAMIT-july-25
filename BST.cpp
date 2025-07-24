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

Node* insert(Node* , int );
void inorder(Node* );

int main(){
    Node *root=nullptr;
    root=insert(root,9);
    root=insert(root,8);
    root=insert(root,15);
    root=insert(root,6);
    root=insert(root,12);
    root=insert(root,1);
    inorder(root);
    return 0;
}

Node* insert(Node *root, int data){
    if(root==nullptr)return new Node(data);
    if(root->data==data)return root;
    if(root->data>data)root->left= insert(root->left,data);
    if(root->data<data)root->right= insert(root->right,data);
    return root;
}
void inorder(Node* root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}