//Given a matrix whose rows and columns are sorted, check to see if an element exists in the matrix or not
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    int r=0, c=m-1, found=0;
    while(r<n && c<m){
        if(arr[r][c] == target){
            found=1;
            break;
        }
        else if(arr[r][c] > target){
            c--;
        }
        else r++;
    }
    found == 0 ? cout<<"Not Found" : cout<<"Found";
    return 0;
}

//Input Format
// 3 4
// 1 4 6 9
// 3 7 8 17
// 5 10 12 19
// 19