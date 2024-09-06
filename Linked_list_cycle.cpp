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
bool CycleCheck(Node* head){
    Node* slow = head;
    Node* fast =head;
    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow) return true;
    }
    return false;
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
    tail->next = b;
    bool flag = CycleCheck(head);
    if(flag) cout<<"It is Cycle Linked List"<<endl;
    else cout<<"It is not Cycle Linked List"<<endl;
    return 0;
}