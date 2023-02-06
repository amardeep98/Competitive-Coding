//Check to see if the given number is a power of two
#include<iostream>
using namespace std;

int isPowerOfTwo(int n){
    return (n &&!(n & n-1));
}
int main(){
    int n;
    cin>>n;
    cout<<isPowerOfTwo(n)<<endl;
    return 0;
}

/*
n=8
n-1=7
n & n-1 = 0001 & 0111 = 0000
!(n & n-1) = 1

if n=0
n && (!(n & n-1)) = 0 && (!(n & n-1)) = 0
*/