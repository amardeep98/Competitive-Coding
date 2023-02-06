#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int start, int end);
int main(){
    int arr[] = {5, 8, 12, 34, 56, 77, 87, 654, 3455};
    int start = 0, end = sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    int found = BinarySearch(arr, n, start, end-1);
    if(found < 0){
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }

    return 0;
}
    
int BinarySearch(int arr[], int n, int start, int end){
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] == n){
            return mid;
        }
        else if(arr[mid] < n){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

