#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
  int data;
  Node* next;
  Node(int n) : data(n),next(NULL) {}
};
Node* MiddleElement(Node* head){
    Node* slow = head;      //T.C = O(n)
    Node* fast = head;
    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
  head = MiddleElement(head);
  cout<<head->data;
    return 0;
}