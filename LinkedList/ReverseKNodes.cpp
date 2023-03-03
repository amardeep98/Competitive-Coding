//Reverse every k nodes
//For k = 2, reverse first 2 nodes. then reverse next 2 nodes and so on
//Input: 1->2->3->4->->5->6                Output: 2->1->4->3->6->5
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

node* reverseK(node* &head, int k){
    if(!head || head->next == NULL){
        return head;
    }
    node *prev = NULL, *curr = head, *next = NULL;
    int count = 0;
    while(curr != NULL && count<k){
        next = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(curr!=NULL){
        head->next = reverseK(curr, k);
    }
    return prev;
}



int main(){
    node* head = NULL;
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    int k= 3;
    display(head);
    node* newHead = reverseK(head, k);
    display(newHead);
    return 0;
}
//4 -> 1 -> 2 -> 3 -> NULL