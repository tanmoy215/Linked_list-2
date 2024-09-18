#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
    int data;
    Node* next;
    Node(int data){
       this->data = data;
       this->next = nullptr;
    }
};
void display(Node* head){
  while(head!=nullptr){
     cout<<head->data<<" ";
     head = head->next;
  }
  cout<<endl;
}
int mmiddle(Node* head){
   int size=0;
   Node* temp = head;
    while(temp!=NULL){
      size++;
      temp = temp->next;    //using size
    }
    Node* help = head;
   int mid = size/2;
   for(int i=1;i<=mid;i++){
      help = help->next;
   }
   return help->data;
}
void middle(Node* head){
   Node* slow = head;
   Node* fast = head;
   while(fast->next->next!=nullptr && fast->next->next->next!=nullptr){
     slow=slow->next;
     fast = fast->next->next;
   }
   slow->next = slow->next->next;
}
int main(){
   Node* head = new Node(10);
   Node* a = new Node(20);
   Node* b = new Node(30);
   Node* c = new Node(40);
   Node* d = new Node(50);
   head->next =a;
   a->next = b;
   b->next = c;
   c->next = d;
   display(head);
   middle(head);
   display(head);
  return 0;
}