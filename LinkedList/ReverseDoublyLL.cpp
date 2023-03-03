#include <iostream>
using namespace std;
class node{
    public:
        int val;
        node* next;
        node* prev;
    node(int v){
        val = v;
        next = NULL;
        prev = NULL;
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
    n -> prev = temp;
    temp->next = n;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(!head){
        head = n;
        return;
    }
    head -> prev = n;
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
    node *temp = NULL, *curr = head;
    while(curr != NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    if(temp != NULL){
        head = temp->prev;
    }
}

int main(){
    node* head = NULL;
    insertAtHead(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 1);
    insertAtHead(head, 4);
    display(head);
    reverse(head);
    display(head);
    return 0;
}