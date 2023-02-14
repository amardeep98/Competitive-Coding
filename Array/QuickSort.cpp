#include<iostream>
using namespace std;

int Partition(int arr[], int p, int r);
void swap(int arr[], int index1, int index2);
void QuickSort(int arr[], int p, int r);

void QuickSort(int arr[], int p, int r){
    if(p<r){
        int q = Partition(arr, p, r);
        QuickSort(arr, p, q-1);
        QuickSort(arr, q+1, r);
    }
}

int Partition(int arr[], int p, int r){
    int i = p-1;
    int x = arr[r];
    for(int j=p; j<r; j++){
        if(arr[j] <= x){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, ++i, r);
    return i;
}

void swap(int arr[], int index1, int index2){
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int main(){
    int arr[] = {78, 4, 33, 544, 2, 1, 445, 3456};
    int size = (sizeof(arr)/sizeof(arr[0]));
    QuickSort(arr, 0, size-1);
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
