//Find the intersection point of two linked lists
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
    int count = 0;
    node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int findIntersection(node* &head1, node* &head2){
    node *temp1, * temp2;
    int l1 = length(head1), l2 = length(head2);
    int d=0;
    if(l1>l2){
        d = l1-l2;
        temp1 = head1;
        temp2 = head2;
    }
    else{
        d = l2-l1;
        temp1 = head2;
        temp2 = head1;
    }
    while(d){
        temp1 = temp1->next;
        if(temp1 == NULL){
            return -1;
        }
        d--;
    }
    while(temp1->next!=NULL || temp2->next!=NULL){
        if(temp1->next == temp2->next){
            return temp1->val;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return -1;
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
    node *head1 = NULL, *head2 = NULL;
    insertAtHead(head1, 2);
    insertAtHead(head1, 3);
    insertAtHead(head1, 1);
    insertAtHead(head2, 4);
    insertAtHead(head2, 5);
    insertAtHead(head2, 6);
    head2->next->next->next = head1;
    display(head1);
    display(head2);
    cout<<findIntersection(head1, head2);
    return 0;
}