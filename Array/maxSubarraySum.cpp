/*Given an array find a subarray which has maximum sum and print maximum sum.
[1, 2, 3, 5, -1]  # 11 = 1 + 2 + 3 + 5
*/
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int currSum[n+1];
    int maxSum = INT_MIN;
    currSum[0] = 0;
    for(int i=1; i<=n; i++){
        currSum[i] = currSum[i-1] + arr[i-1];
    }
    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=0; j<i; j++){
            sum = currSum[i] - currSum[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout<<maxSum<<endl;
    cout<<max(10, 10);
    return 0;
}

/*
def kadane_algorithm(array):
    running_sum = array[0]
    max_sum = array[0]
    for idx in range(1, len(array)):
        current_val = array[idx]
        running_sum = max(current_val, running_sum+current_val)
        max_sum = max(max_sum, running_sum)
    return max_sum

print(kadane_algorithm([1, 2, 3, 5, -1]))
*/