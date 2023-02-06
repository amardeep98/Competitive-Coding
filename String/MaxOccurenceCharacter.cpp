//Given a string, find out which character appears maximum number of times for the first time in the string
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int arr[26]; int maxOccurence=0; char maxChar = s[0];
    for(int i=0; i<26; i++){
        arr[i] = 0;
    }
    for(int i=0; i<s.length(); i++){
        arr[s[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(maxOccurence < arr[i]){
            maxOccurence = arr[i];
            maxChar = i+'a';
        }
    }
    cout<<maxChar<<" - "<<maxOccurence<<endl;
    return 0;
}