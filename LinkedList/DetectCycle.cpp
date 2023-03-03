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

void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;
    int count = 1;
    while(temp ->next != NULL){
        if(count==pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

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

void display(node* head, int count){
    node* temp = head;
    int c=0;
    while(temp != NULL && c<count){
        cout<<temp->val<<" ";
        temp = temp -> next;
        c++;
    }
    cout<<endl;
}

void detectCycle(node* &head){
    node *slowPtr = head, *fastPtr = head;
    while(fastPtr != NULL && fastPtr->next != NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if(slowPtr==fastPtr){
            cout<<"Cycle present"<<endl;
            return;
        }
    }
    cout<<"No cycle Present"<<endl;
}

void removeCycle(node* &head){
    node *slowPtr=head, *fastPtr=head;
    do{
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }while(slowPtr != fastPtr);
    slowPtr = head;
    while(slowPtr->next != fastPtr->next){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next;
    }
    fastPtr->next = NULL;
}

int main(){
    node* head = NULL;
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    makeCycle(head, 3);
    display(head, 10); //sending a count otherwise it will keep displaying because of the cycle
    detectCycle(head);
    removeCycle(head);
    detectCycle(head);
    delete(head);
    return 0;
}