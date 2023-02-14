#include<iostream>
using namespace std;
void countSort(int arr[], int n, int range){
    int countArr[range] = {0};
    int resultArr[n];
    for(int i=0; i<n; i++){
        countArr[arr[i]]++;
    }
    for(int i=1; i<range; i++){
        countArr[i] += countArr[i-1];
    }
    for(int i=n-1; i>=0; i--){
        int temp = --countArr[arr[i]];
        resultArr[temp] = arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<resultArr[i]<<" ";
    }
}
int main(){
    int n, range;
    cin>>n>>range;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    countSort(arr, n, range);
    return 0;
}