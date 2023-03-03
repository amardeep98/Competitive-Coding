//Append last k nodes of the Linked List to the start of the Linked List
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

int length(node* &head){
    int count=0;
    node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

void AppendLastKNodes(node* &head, int k){
    node *newHead, *newTail, *temp = head;
    int l = length(head);
    int count = 1;
    while(temp->next != NULL){
        if(count == l-k){
            newTail = temp;
        }
        if(count == l-k+1){
            newHead = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = head;
    head = newHead;
    newTail->next = NULL;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    display(head);
    AppendLastKNodes(head, 4);
    display(head);
    return 0;
}