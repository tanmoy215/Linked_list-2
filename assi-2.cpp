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
Node* removelist(Node* list1, int a, int b,Node* list2){
         Node* c =list2;
         //find list2 tail
         while(c->next!=NULL){
             c=c->next;
         }
         Node* left = list1;
         for(int i=0;i<a-1;i++){
                 left=left->next;
         }
         Node* right = list1;
         for(int i=0;i<=b;i++){
            right=right->next;
         }
         left->next = list2;
         c->next = right;
         return list1;
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
    cout<<"Node -1 "<<endl;
    display(head);
     //list2
     Node* h = new Node(89);
     Node* aa = new Node(78);
     Node* bb = new Node(67);
     Node* taill = new Node(98);
     h->next = aa;
     aa->next = bb;
     bb->next=taill;
     cout<<"Node - 2"<<endl;
     display(h);
     Node* ans = removelist(head,2,3,h);
     cout<<"After remove Nodes : "<<endl;
    display(ans);
    return 0;
 }