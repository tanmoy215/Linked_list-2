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
Node* SwappingNode(Node* head,int idx){
     Node* temp = head;
      int len =0;
      while(temp!=NULL){
        len++;
        temp=temp->next;
      }
      Node* a = head;
      Node* b = head;
      temp = head;
      for(int i=1;i<=len,temp!=NULL;i++){
        if(i==idx) a= temp;
        if(i==(len-idx+1)) b = temp;
       temp = temp->next;
      }
      swap(a->data,b->data);
      return head;
}
void display(Node* head){
    Node* temp  =head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    //list1
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
    head = SwappingNode(head,1);
    display(head);
    return 0;
 }