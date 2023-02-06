//To find two unique numbers in an array where all numbers, except two, are present twice(unique numbers)
#include<iostream>
using namespace std;

int isSetBit(int n, int position){
    return ((n & (1<<position)) != 0);
}

int findTwoUniques(int arr[], int n){
    int xorSum = 0;
    for(int i=0; i<n; i++){
        xorSum = xorSum^arr[i];
    }
    int tempXor = xorSum;
    int positionOf1 = 0;
    int setBit = 0;
    while(setBit != 1){
        setBit = tempXor & 1;
        positionOf1++;
        tempXor = tempXor>>1;
    }
    int newXor = 0;
    for(int i=0; i<n; i++){
        if(isSetBit(arr[i], positionOf1-1)){
            newXor = arr[i]^newXor;
        }
    }
    cout<<newXor<<endl;
    cout<<(newXor^xorSum)<<endl;
}

int main(){
    int arr2[] = {1, 2, 3, 5, 7, 3, 1, 2};
    findTwoUniques(arr2, 8);
    return 0;
}