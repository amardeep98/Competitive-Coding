//move all 'x' in a string to the end of the string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string moveAllX(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = moveAllX(s.substr(1));
    if(ch == 'x'){
        return ans+ch;
    }
    return ch+ans;
}
int main(){
    cout<<moveAllX("axxbxcxdexxf");
    return 0;
}


//axxbxcxdexxf
//abcdefxxxxxx