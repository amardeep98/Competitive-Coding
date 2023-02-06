#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m, n , o;
    cin>>m>>n>>o;
    int A[m][n], B[n][o];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>A[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<o; j++){
            cin>>B[i][j];
        }
    }
    int C[m][o];
    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            C[i][j] = 0;
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            for(int k=0; k<n; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;