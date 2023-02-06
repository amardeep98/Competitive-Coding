#include<iostream>
using namespace std;

int main(){
    int arr[] = {78, 4, 33, 544, 2, 1, 445, 3456};
    int size = (sizeof(arr)/sizeof(arr[0]));
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}