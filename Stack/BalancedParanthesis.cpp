//check to see if the paranthesis are balanced
#include <iostream>
#include <stack>
using namespace std;
bool balancedParanthesis(string s){
    int size = s.length();
    stack<char> st;
    bool result = true;
    for(int i=0; i<size; i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                result=false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                result=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                result=false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return result;
}
int main(){
    string s = "{[()]}";
    if(balancedParanthesis(s)){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;
}