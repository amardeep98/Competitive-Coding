//Print all possible words from phone digits
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//keyPadArr has all the letters corresponding to the digits in the phone
string keyPadArr[]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void keyPad(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = keyPadArr[ch-'0'];
    string ros = s.substr(1);
    for(int i=0; i<code.length(); i++){
        keyPad(ros, ans + code[i]);
    }
}
int main(){
    keyPad("23", "");
    return 0;
}