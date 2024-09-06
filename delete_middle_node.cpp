#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
void Middle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next != NULL){  //find middle
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = head;
    while(fast->next !=slow){
        fast = fast->next;
    }
    fast->next = slow->next;
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;
     display(head);
    Middle(head);
    display(head);
    return 0;
}
