#include<iostream>
using namespace std;
int setBit(int n, int position){
    return (n | (1 << position));
}
int getBit(int n, int position){
    return ((n & (1 << position)) != 0);
}
int clearBit(int n, int position){
    int mask = ~(1 << position);
    return (n & mask);
}
int updateBit(int n, int position, int value){               //value (0 or 1) is updated at position
    int mask = ~(1 << position);
    n = n & mask;
    return (n | (value << position));
}
int main(){
    cout<<getBit(5, 2)<<endl;
    //cout<<setBit(5, 3)<<endl;
    //cout<<clearBit(5, 2)<<endl;
    //cout<<updateBit(5, 1, 1);
    return 0;
}