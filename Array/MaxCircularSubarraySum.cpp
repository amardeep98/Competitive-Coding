/*
Given an array, find the max circular subarray sum.
[4 -4 6 -6 10 -11 12] ---> 22
12+4+(-4)+6+(-6)+10 = 22
*/
#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum < 0){
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int wrapSum, nonWrapSum;
    nonWrapSum = kadane(arr, n);
    int totalSum = 0;
    for(int i=0; i<n; i++){
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    wrapSum = totalSum + kadane(arr, n);
    cout<<max(wrapSum, nonWrapSum);

    return 0;
}