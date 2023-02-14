//Sort the array such that element at odd index is lesser than it's adjacent elements
#include<iostream>
using namespace std;
void swap(int arr[], int index1, int index2){
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}
void waveSort(int arr[], int n){
    for(int i=1; i<n; i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr, i, i-1);
        }
        if(arr[i]>arr[i+1] && i<(n-1)){
            swap(arr, i, i+1);
        }
    }
}
int main(){
    int arr[] = {2, 4, 5, 1, 6, 9, 7, 3, 8};
    waveSort(arr, 9);
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}