#include<iostream>
using namespace std;

int main(){
    int arr[] = {78, 4, 33, 544, 2, 1, 445, 3456};
    int size = (sizeof(arr)/sizeof(arr[0]));
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}