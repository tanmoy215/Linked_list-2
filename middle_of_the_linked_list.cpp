#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
  int data;
  Node* next;
  Node(int n){
    data = n;
    next = NULL;
  }
};
 void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
 cout<<endl;
  }
  Node* MiddleElement(Node* head){
     Node* temp = head;
      int size;
      while(temp!=NULL){
        size++;
        temp=temp->next;
      }
      int midx = size/2;
      Node* mid = head;
        for(int i=1;i<=midx;i++){
            mid = mid->next;
        }
      return mid;
  }
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    display(head);
   head =  MiddleElement(head);
   cout<<head->data;
    return 0;
}