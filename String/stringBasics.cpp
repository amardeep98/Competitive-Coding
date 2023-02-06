#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s1 = "abc";
    string s2 = "xyz";
    string s3 = "nincompoop";
    cout<<s1[1]<<endl;                //b
    cout<<s1+s2<<endl;                //abcxyz
    s1.append(s2);
    cout<<s1<<endl;                   //abcxyz
    s1.clear();
    cout<<s1<<endl;
    cout<<s1.empty()<<endl;             //1
    s1="fam";
    cout<<s1<<endl;                         //fam
    cout<<s1.empty()<<endl;                 //0
    cout<<s2.compare(s1)<<endl;             //1
    cout<<s3.find("com")<<endl;             //3
    s3.insert(2, "lol");
    cout<<s3<<endl;             //nilolncompoop

    // string s4 = "777";
    // int x = stoi(s4);           //converts from string to integer
    // cout<<x+2<<endl;
    // cout<<to_string(x) + "2"<<endl;   //7772

    string s5 = "dedaadmmdiiqzwd";
    sort(s5.begin(), s5.end());
    cout<<s5<<endl;               //aadddddeiimmqwz
    transform(s5.begin(), s5.end(), s5.begin(), ::toupper);
    cout<<s5<<endl;
    transform(s5.begin(), s5.end(), s5.begin(), ::tolower);
    cout<<s5<<endl;

    //get maximum number that can be formed out of a string having only digits
    string s6 = "37682998";
    sort(s6.begin(), s6.end(), greater<int>());
    cout<<s6<<endl;
    return 0;
}