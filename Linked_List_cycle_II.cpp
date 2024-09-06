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
Node* CycleElement(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool flag = false; //no cycle
    while(fast!=NULL && fast->next!=NULL){
          slow = slow->next;
          fast= fast->next->next;
          if(fast==slow){
            flag = true;
            break;
          }
    }
    if(flag){
        Node* temp = head;
        while(temp!=slow){
            temp = temp->next;
            slow = slow->next;
        }
        return slow;
    }
    else{
        return NULL;
    }
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;
    tail->next = b;
  head = CycleElement(head);
  cout<<head->data<<endl;
    return 0;
}