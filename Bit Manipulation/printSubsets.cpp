//WAP to generate all subsets of a set
#include<iostream>
using namespace std;

void generateSubsets(int arr[], int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<=n; j++){
            if(i & (1<<j)){                   //if jth bit is set
            cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int arr[] = {1, 2, 3, 4};
    generateSubsets(arr, 4);
    return 0;
}