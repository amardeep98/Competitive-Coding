#include<iostream>
#include<limits.h>
using namespace std;

void MergeSort(int arr[], int p, int r);
void Merge(int arr[], int p, int q, int r);
int main(){
    int arr[] = {78, 4, 33, 544, 2, 1, 445, 3, 3456};
    int size = (sizeof(arr)/sizeof(arr[0]));
    MergeSort(arr, 0, size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

void MergeSort(int arr[], int p, int r){
    if(p < r){
        int q = (p+r)/2;
        MergeSort(arr, p, q);
        MergeSort(arr, q+1, r);
        Merge(arr, p, q, r);
    }

}

void Merge(int arr[], int p, int q, int r){
    int L[q-p+1], R[r-q+1];
    int i=0, j=0;
    for(int k=p; k<=q; k++){
        L[i++] = arr[k];
    }
    for(int k=q+1; k<=r; k++){
        R[j++] = arr[k];
    }
    L[i] = INT_MAX;
    R[j] = INT_MAX;
    i = j = 0;
    
    for(int k=p; k<=r; k++){
        if(L[i] <= R[j]){
            arr[k] = L[i++];
        }
        else{
            arr[k] = R[j++];
        }
    }
}
