//To find a unique number in an array where all numbers are present twice, except one(unique number)
#include<iostream>
using namespace std;

int findUnique(int arr[], int n){
    int xorSum = 0;
    for(int i=0; i<n; i++){
        xorSum = xorSum^arr[i];
    }
    return xorSum;
}
int main(){
    int arr[] = {1, 2, 3, 67, 1, 3, 2};
    cout<<findUnique(arr, 7);
    return 0;
}

