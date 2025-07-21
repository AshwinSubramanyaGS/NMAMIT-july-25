#include <iostream>
#include <stack>
using namespace std;

// Definition of a singly linked list node
struct Node {
    int data;
    Node* next;
    Node* previous;
    
    Node(int val) : data(val), next(nullptr) , previous(nullptr) {}
};

Node* insertInMiddle(Node*,int,int);
Node* deleteInMiddle(Node*,int);
void printList(Node* );
void printListRev(Node* head);

int main(){

    Node* head=nullptr;
    head=insertInMiddle(head,1,0);
    head=insertInMiddle(head,2,5);
    head=insertInMiddle(head,3,5);
    head=insertInMiddle(head,4,5);
    head=insertInMiddle(head,5,2);
    printList(head);
    head=deleteInMiddle(head,2);
    printListRev(head);
}

Node* insertInMiddle(Node *head,int data,int pos){
    Node* newNode=new Node(data);
    if(head==nullptr)
        return newNode;

    Node* temp=head;
    for(int i=0;i<pos-1&&temp->next!=nullptr;i++,temp=temp->next);
    
    newNode->next=temp->next;
    if(temp->next!=nullptr)temp->next->previous=newNode;
    temp->next=newNode;
    newNode->previous=temp;
    return head;
}

Node* deleteInMiddle(Node *head,int pos){
    if(head==nullptr)
        return nullptr;
    if(head->next==nullptr)
    {
        delete(head);
        return nullptr;
    }
    Node* temp=head;
    for(int i=0;i<pos&&temp->next!=nullptr;i++,temp=temp->next);
    
    Node* pre=temp->previous;
    pre->next=temp->next;
    if(temp->next!=nullptr)temp->next->previous=pre;
    delete(temp);
    return head;
}
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}
void printListRev(Node* head) {
    while (head->next != nullptr) {
        head = head->next;
    }
    while (head!=nullptr){
        cout << head->data << " -> ";
        head=head->previous;
    }
    cout << "NULL\n";
}