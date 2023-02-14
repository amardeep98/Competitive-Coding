#include <iostream>
using namespace std;
class base{
    public:
        virtual void print(){
            cout<<"This is base class's print method"<<endl;
        }
        void display(){
            cout<<"This is base class's display method"<<endl;
        }
};
class derived : public base{
    public:
        void print(){
            cout<<"This is derived class's print method"<<endl;
        }
        void display(){
            cout<<"This is derived class's display method"<<endl;
        }
};
int main(){
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr -> display();
    return 0;
}

//this is an example of method overriding