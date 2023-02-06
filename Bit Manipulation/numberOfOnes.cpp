//WAP to count the number of 1's in binary representation of the number
#include<iostream>
using namespace std;
int countOnes(int n){
    int count = 0;
    while(n != 0){
        n = n & (n-1);
        count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countOnes(n)<<endl;
    return 0;
}


/*
(n & n-1) has same bits as n except the rightmost set bit

n = 19 = (010011), n-1 = 18 = (010010)
n= (n & n-1) = 010011 & 010010 = 010010 = (18)10

n = 18 = (010010), n-1 = 17 = (010001)
n = (n & n-1) = 010010 & 010001 = 010000 = 16

n = 16 = (010000), n-1 = 15 = (001111)
n = (n & n-1) = 010000 & 001111 = 000000 = 0
*/