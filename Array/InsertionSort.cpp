#include<iostream>
using namespace std;

int main(){
    int arr[] = {78, 4, 33, 544, 2, 1, 445, 3456};
    int size = (sizeof(arr)/sizeof(arr[0]));
    for(int i=1; i<size; i++){
        int temp = arr[i], j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[++j]=temp;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
