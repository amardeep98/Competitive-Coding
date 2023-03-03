//Put even elements after odd elements in a LL
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

void PutEvenAfterOdd(node* &head){
    node *oddList = head;
    node *evenList = head->next;
    node *evenStart = evenList;
    while (oddList->next!=NULL && evenList->next!=NULL)
    {
        oddList->next = evenList->next;
        oddList = oddList->next;
        evenList->next = oddList->next;
        evenList = evenList->next;
    }
    oddList->next = evenStart;
    if(oddList->next == NULL){
        evenList->next = NULL;
    }
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
    int arr[] = {6,5,4,3,2,1};
    for(int i=0; i<6; i++){
        insertAtHead(head, arr[i]);
    }
    display(head);
    PutEvenAfterOdd(head);
    display(head);
    return 0;
}