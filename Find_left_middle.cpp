#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
  int data;
  Node* next;
   Node(int data){
    this->data = data;
    this->next = NULL;
   }
};
Node* LeftMiddle(Node* head){
     Node* slow = head;
     Node* fast = head;
     while(fast->next->next != NULL && fast->next->next->next){
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
    head = LeftMiddle(head);
    cout<<head->data<<endl;
    return 0;
 }