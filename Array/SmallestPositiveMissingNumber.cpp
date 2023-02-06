/*You are given an array arr[] of N integers including 0. The task is to find the smallest positive number(>0) missing 
from the array.
Constraints:
1<= N <= 10^6,
-10^6 <= Ai <= 10^6
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    const int N = 1e5+2;
    int boolArr[N];
    for(int i=0; i<N; i++){
        boolArr[i] = 0;
    }
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            boolArr[arr[i]] = 1;
        }
    }
    for(int i=1; i<N; i++){
        if(boolArr[i] == 0){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}