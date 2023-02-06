//Sieve Of Eratosthenes Algo is used to find all the prime numbers in a given range
#include<iostream>
using namespace std;
void SieveOfEratosthenes(int n){
    int arr[n+1] = {0};
    for(int i=2; i<=n/2; i++){
        if(arr[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                arr[j] = 1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(arr[i] == 0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    SieveOfEratosthenes(n);
    return 0;
}