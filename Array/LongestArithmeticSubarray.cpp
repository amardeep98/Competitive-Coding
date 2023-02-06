#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int currMax = 2, max = 2, pd = arr[1]-arr[0];
    for(int j=2; j<n; j++){
        if(arr[j]-arr[j-1] == pd){
            currMax++;
        }
        else{
            currMax = 2;
            pd = arr[j]-arr[j-1];
        }
        max = currMax>max ? currMax:max;
    }
    cout<<max;
    return 0;
}

//Subarray is a contiguous part of an array
//An arithmetic subarray is a subarray in which consecutive elements follow Arithmetic Progression
//In [1, 3, 5, 7, 9, 11, 13, 14], [3, 5, 7, 9, 11] and [13, 14] are arithmetic subarrays