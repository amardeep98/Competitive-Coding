#include <iostream>
using namespace std;
class Student{
    string name;
    int age;
    bool gender;
    public:
    Student(){
        cout<<"Default constructor"<<endl;
    }
    Student(string s, int a, int g){
        cout<<"Parameterised constructor"<<endl;
        name = s;
        age = a; 
        gender = g;
    }
    Student(Student &s){
        cout<<"Deep Copy constructor"<<endl; //both the objects point to same location in memory while shallow copy does not
        name = s.name;
        age = s.age;
        gender = s.gender;
    }
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
    bool operator ==(Student &a){                  //operator overloading
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }
    void printInfo(){
        cout<<name<<" "<<age<<" "<<gender<<endl;
    }

};
int main(){
    Student a("Jenni", 22, 1);
    a.printInfo();
    Student c = a;    //-->Shallow Copy
    //Student c(a);
    c.printInfo();
    if(a==c){
        cout<<"Same"<<endl;           //if the values of the members are same
    }
    else{
        cout<<"Not same"<<endl;
    }
}