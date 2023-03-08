#include <iostream>
using namespace std;
#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr = new int[n];
        top=-1;
    }

    void push(int x){
        if(top == n-1){
            cout<<"Can't push. Stack overflow."<<endl;
            return;
        }
        arr[++top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"Nothing to pop."<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1){
            cout<<"Stack is empty."<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top == -1;
    }
};

int main(){
    stack s;
    s.pop();
    s.push(1);s.push(2);s.push(3);
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}