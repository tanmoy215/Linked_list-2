#include <bits/stdc++.h>
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

Node* IntersectionElement(Node* headA, Node* headB) {
    Node* tempa = headA;
    Node* tempb = headB;
    int lena = 0;
    int lenb = 0;

    // Calculate the length of both linked lists
    while (tempa != NULL) {
        lena++;
        tempa = tempa->next;
    }
    while (tempb != NULL) {
        lenb++;
        tempb = tempb->next;
    }

    // Reset the pointers to the heads of the lists
    tempa = headA;
    tempb = headB;

    // Move the pointer of the longer list ahead by the difference in lengths
    if (lena > lenb) {
        for (int i = 0; i < (lena - lenb); i++) {
            tempa = tempa->next;
        }
    } else {
        for (int i = 0; i < (lenb - lena); i++) {
            tempb = tempb->next;
        }
    }

    // Traverse both lists and find the intersection point
    while (tempa != NULL && tempb != NULL) {
        if (tempa == tempb) {
            return tempa;
        }
        tempa = tempa->next;
        tempb = tempb->next;
    }

    return NULL;
}

int main() {
    // Creating the first linked list
    Node* headA = new Node(4);
    Node* aA = new Node(1);
    Node* bA = new Node(8); // Intersection starts here
    Node* cA = new Node(4);
    Node* tailA = new Node(5);
    headA->next = aA;
    aA->next = bA;
    bA->next = cA;
    cA->next = tailA;

    // Creating the second linked list
    Node* headB = new Node(5);
    Node* aB = new Node(6);
    Node* bB = new Node(1);
    headB->next = aB;
    aB->next = bB;
    bB->next = bA; // Linking the second list to the intersection node

    // Finding the intersection node
    Node* intersection = IntersectionElement(headA, headB);

    if (intersection != NULL) {
        cout << "Intersection at node with data: " << intersection->data << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}
