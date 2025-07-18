#include <iostream>
#include <stack>
using namespace std;

// Definition of a singly linked list node
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

// Function to push nodes into a stack and reverse the list
Node* reverseUsingStack(Node* head) {
    if (!head) return nullptr;

    stack<Node*> st;
    Node* temp = head;

    // Push all nodes into the stack
    while (temp != nullptr) {
        st.push(temp);
        temp = temp->next;
    }

    // Pop nodes and rearrange links
    Node* newHead = st.top();
    st.pop();
    temp = newHead;

    while (!st.empty()) {
        temp->next = st.top();
        st.pop();
        temp = temp->next;
    }
    temp->next = nullptr;

    return newHead;
}

// Helper function to print the list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Main function to test the code
int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> NULL
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List:\n";
    printList(head);

    head = reverseUsingStack(head);

    cout << "\nReversed List:\n";
    printList(head);

    return 0;
}
