#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
    int data;
    Node* next;
    Node(int n){
        data = n;
        next=NULL;
    }
};
Node* remove(Node* head,int idx){
     Node* slow = head;
     Node* fast = head;
      for(int i=1;i<=idx+1;i++){
        if(fast==NULL) return head->next;
        fast = fast->next;
      }
      while(fast!=NULL){
        slow = slow->next;
        fast = fast->next;
      }
      slow->next = slow->next->next;
      return head;
}
void display(Node* head){
   Node* temp = head;
   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   cout<<endl;
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(10);
    Node* b = new Node(50);
    Node* c = new Node(40);
    Node* d = new Node(60);
    Node* e = new Node(90);
    Node* tail = new Node(170);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next =tail;
     display(head);
     head = remove(head,2);
     display(head);
    return 0;
}