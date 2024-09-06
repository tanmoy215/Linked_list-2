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
Node* removeval(Node* head,int val){
    Node* temp = head;
    Node* fake = new Node(-1);
    Node* tf = fake;
    while(temp!=NULL){
        if(temp->data != val){
                tf->next = temp;
                 tf=tf->next;
            }
            else{
                tf->next = temp->next;
            }
            temp = temp->next;
    }
    return fake->next;
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
    Node* tail = new Node(30);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;
    display(head);
    head = removeval(head,30);
    display(head);
    return 0;
 }