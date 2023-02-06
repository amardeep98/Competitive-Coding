#include<iostream>
#include<limits.h>
using namespace std;

void HeapSort(int arr[], int size);
void BuildMaxHeap(int arr[], int size, int heapSize);
int MaxHeapify(int arr[], int i, int heapSize);
void swap(int arr[], int index1, int index2);

int main(){
    int arr[] = {78, 4, 33, 544, 2, 1, 445, 3, 3456};
    int size = (sizeof(arr)/sizeof(arr[0]));
    HeapSort(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

void HeapSort(int arr[], int size){
    static int heapsize = size-1;
    BuildMaxHeap(arr, size, heapsize);
    for(int i=size-1; i>0; i--){
        swap(arr, 0, i);
        MaxHeapify(arr, 0, --heapsize);
    }
}

void BuildMaxHeap(int arr[], int size, int heapSize){
    for(int i=size/2; i>=0; i--){
        MaxHeapify(arr, i, heapSize);
    }
}

int MaxHeapify(int arr[], int i, int heapSize){
    int l=2*i, r=(2*i)+1;
    int largest=i;
    if(l<=heapSize && arr[l]>arr[largest]){
        largest = l;
    }
    if(r<=heapSize && arr[r]>arr[largest]){
        largest = r;
    }
    if(largest != i){
        swap(arr, i, largest);
        MaxHeapify(arr, largest, heapSize);
    }
}

void swap(int arr[], int index1, int index2){
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}