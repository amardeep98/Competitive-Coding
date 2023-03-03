#include <iostream>
using namespace std;
class node{
    public:
        int val;
        node* next;
    node(int v){
        val = v;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp->next = n;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next  = head;
    head = n;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void reverse(node* &head){
    if(!head || head->next == NULL){
        return;
    }
    node *prev = NULL, *curr = head, *next = NULL;
    while(curr != NULL){
        next = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

node* reverseRecursive(node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main(){
    node* head = NULL;
    insertAtHead(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 1);
    insertAtHead(head, 4);
    display(head);
    head = reverseRecursive(head);
    display(head);
    return 0;
}
//4 -> 1 -> 2 -> 3 -> NULL