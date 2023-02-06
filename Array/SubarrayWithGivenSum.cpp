/*Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given 
number S.
Constraints:
1 <= N <= 10^5,
0 <= Ai <= 10^10
Input: N = 5, S = 12 A[] = {1,2,3,7,5}
Output: 24 Explanation: The sum of elements from 2nd position to 4th position is 12.
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
    int sum;
    cin>>sum;
    int x=0, y=0, currSum=0;
    while(y < n && x < n){
        if((currSum + arr[y]) > sum){
            y = ++x;
            currSum = 0;
        }
        else if((currSum + arr[y]) <= sum){
            currSum +=  arr[y++];
        }
        if(currSum == sum){
            cout<<x+1<<" "<<y<<endl;
            //return 0;  ----> Gives only one subarray matching the condition
        }
    }
    return 0;
}