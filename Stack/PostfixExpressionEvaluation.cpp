//Evaluate a prefix expression
#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
void evaluatePostfixExp(string s){
    stack<int> st;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i]-'0');
        }
        else{
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '^':
                st.push(pow(a, b));
                break;
            
            default:
                break;
            }
        }
    }
    cout<<st.top()<<endl;
}
int main(){
    string s = "46+2/5*7+";
    evaluatePostfixExp(s);
    return 0;
}