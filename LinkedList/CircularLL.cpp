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

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        n->next = n;
        return;
    }
    node *temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n; 
    n->next  = head;
    head = n;
}

void insertAtTail(node* &head, int val){
    if(head == NULL){
        insertAtHead(head, val);
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next != head){
        temp = temp -> next;
    }
    temp->next = n;
    n->next = head;
}

void deleteAtHead(node* &head){
    node *toDelete = head, *temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = head->next;
    head = head->next;
    delete toDelete;
}

void deletion(node* &head, int pos){
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    int count = 1;
    node *temp = head;
    while(count < pos-1){
        temp = temp->next;
        count++;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void display(node* &head){
    node* temp = head;
    do{
        cout<<temp->val<<" ";
        temp = temp -> next;
    }while(temp != head);
    cout<<endl;
}

int main(){
    node* head = NULL;
    insertAtHead(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 1);
    insertAtTail(head, 4);
    insertAtHead(head, 0);
    display(head);
    deletion(head, 1);
    display(head);
    return 0;
}