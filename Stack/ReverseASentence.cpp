//Reverse a sentence by words using stack
#include <iostream>
#include <stack>
using namespace std;
void reverse(string s){
    stack<string> st;
    for(int i=0; i<s.length(); i++){
    string word = "";
        while(s[i]!=' ' && i<s.length()){
            word += s[i++];
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    string s = "Hey, how are you doing?";
    reverse(s);
    return 0;
}