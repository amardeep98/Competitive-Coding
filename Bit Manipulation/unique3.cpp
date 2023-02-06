//To find the unique number in an array where all the numbers, except one, are present thrice
#include<iostream>
#include<math.h>
using namespace std;

int getBit(int n, int position){
    return ((n & (1<<position)) !=0);
}
int setBit(int n, int position){
    return (n | (1<<position));
}
int unique(int arr[], int n){
    int result = 0;
    for(int i=0; i<64; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            if(getBit(arr[j], i)){
                sum++;
            }
        }
        if(sum%3 != 0){
            result = setBit(result, i);
        }
    }
    return result;
}
int main(){
    int arr[] = {1,2,4,5933,4,4,1,2,2,1};
    cout<<unique(arr, 10);
    return 0;
}