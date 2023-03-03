//Merge two sorted Linked Lists
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

node* merge(node* &head1, node* &head2){
    node *dummy = new node(-1);
    node *head3=dummy, *temp1=head1, *temp2=head2;

    while(temp1!=NULL && temp2!=NULL){
        if(temp1->val <= temp2->val){
            head3->next = temp1;
            temp1 = temp1->next;
        }
        else{
            head3->next = temp2;
            temp2 = temp2->next;
        }
        head3 = head3->next;
    }
    while(temp1!=NULL){
        head3->next = temp1;
        temp1 = temp1->next;
        head3 = head3->next;
    }
    while(temp2!=NULL){
        head3->next = temp2;
        temp2 = temp2->next;
        head3 = head3->next;
    }
    return dummy->next;
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
    node* head1 = NULL;
    node* head2 = NULL;
    int arr1[] = {1,3,4,5,7};
    int arr2[] = {2,6,8};
    for(int i=0; i<5; i++){
        insertAtTail(head1, arr1[i]);
    }
    for(int i=0; i<3; i++){
        insertAtTail(head2, arr2[i]);
    }
    display(head1);
    display(head2);
    node *newHead = merge(head1, head2);
    display(newHead);
    return 0;
}