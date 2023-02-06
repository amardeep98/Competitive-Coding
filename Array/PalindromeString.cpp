//To check if a word is palindrome
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int flag = 1;
    for(int i=0; i<n/2; i++){
        if(arr[i] != arr[n-i-1]){
            flag = 0;
        }
    }
    flag == 0 ? cout<<"Not Palindrome" : cout<<"Palindrome";
    return 0;
}