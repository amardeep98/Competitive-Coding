//Find the number of ways in which "n" friends can remain single or can be paired up
#include<iostream>
#include<algorithm>
using namespace std;
int pairing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return pairing(n-1) + pairing(n-2) *(n-1);
}
int main(){
    cout<<pairing(4);
    return 0;
}