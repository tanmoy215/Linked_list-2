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
int lencycle(Node* head){
    Node* temp = head;
    int len = 0;
    do
    {
       len++;
       temp=temp->next;
    } while (temp->next!=head);
   return len; 
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
    tail->next = head;
    cout<<lencycle(head)<<endl;
    return 0;
}