/*Isyana is given the number of visitors at her local theme park on N consecutive days.
The number of visitors on the i-th day is V.A day is record breaking if it satisfies both of the following 
conditions:
1.The number of visitors on the day is strictly larger than the number of visitors on each of the previous days. 
2. Either it is the last day, or the number of visitors on the day is strictly larger than the
number of visitors on the following day. 
Note that the very first day could be a record breaking day!

Please help Isyana find out the number of record breaking days.*/

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr[n]=-1;
    int max=-1, ans=0;
    
    for(int i=0; i<n; i++){
        if(arr[i]>max && arr[i]>arr[i+1]){
            max = arr[i];
            ans++;
        }
    }
    
    cout<<ans;
    return 0;
}