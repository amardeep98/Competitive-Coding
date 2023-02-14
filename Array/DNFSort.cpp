//DNF stands for Dutch National Flag, also called 0,1,2 sort
//Used to sort an array with elements 0s, 1s and 2s
#include<iostream>
using namespace std;
void swap(int arr[], int index1, int index2){
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}
void dnfSort(int arr[], int n){
    int l =0, mid = 0, r = n-1;
    while(mid<=r){
        if(arr[mid] == 0){
            swap(arr, l, mid);
            l++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr, mid, r);
            mid++; r--;
        }
    }
}
int main(){
    int arr[] = {0,2,1,1,2,0,0,1,1};
    dnfSort(arr, 9);
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}