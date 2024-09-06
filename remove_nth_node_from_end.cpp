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
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}   
    //Using 1st method
Node* remove(Node* head,int idx){
     int size=0;
     Node* temp  = head;
     while(temp!=NULL){
        size++;
        temp = temp->next;
     }
     if(idx==size){ 
        return head->next;
     }
     int m = size-idx;
     Node* an = head;
     for(int i=1;i<m;i++){
        an = an->next;
     }
     an->next = an->next->next;
     return head;
}   
 //using fast & slow Pointer
 Node* removep(Node* head,int idx){
    Node* slow = head;
    Node* fast = head;
    for(int i=1;i<=idx+1;i++){
        if(fast==NULL) return head->next;
        fast = fast->next;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next = slow->next->next;
    return head;
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
    display(head);
    int n;
    cout<<"Enter Index of the Last : ";
    cin>>n;
    // head = remove(head,n);  //using 1st method
    // display(head);
    head = removep(head,n);  //using pointer method 
     display(head);
    return 0;
}