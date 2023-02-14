//In an array, there is an inversion if a[i]>a[j] and i<j
//using merge sort technique, it can be calculated in O(n log n)
#include<iostream>
using namespace std;
long long merge(int arr[], int l, int mid, int h){
    long long inv=0;
    int n1 = mid-l+1;
    int n2 = h-mid;
    int A[n1], B[n2];
    for(int i=0; i<n1; i++){
        A[i] = arr[l+i];
    }
    for(int j=0; j<n2; j++){
        B[j] = arr[mid+j+1];
    }
    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(A[i]<=B[j]){
            arr[k++] = A[i++];
        }
        else{
            arr[k++] = B[j++];
            inv += n1-i;
        }
    }
    while(i<n1){
        arr[k++] = A[i++];
    }
    while(j<n2){
        arr[k++] = B[j++];
    }
    return inv;
}
long long mergeSort(int arr[], int l, int h){
    long long inv = 0;
    if(l<h){
        int mid = (l+h)/2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid+1, h);
        inv += merge(arr, l, mid, h);
    }
    return inv;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<mergeSort(arr, 0, n-1)<<endl;
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
}