//replace pi with 3.14 in a string using recursion
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void replacePi(string s){
    if(s.length() == 0){
        return;
    }
    if(s.substr(0, 2) == "pi"){
        cout<<3.14;
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}
int main(){
    replacePi("pippipppxpippip");
    return 0;
}