//Count the number of paths to reach from (0, 0) to (n-1, n-1) in a maze with (n * n) boxes 
//when you can move only one box down or one box right at a time
#include<iostream>
#include<algorithm>
using namespace std;
int countPathMaze(int n, int i, int j){
    if(i == n-1 && j == n-1){
        return 1;
    }
    if(i >= n || j >= n){
        return 0;
    }
    
    return countPathMaze(n, i+1, j) + countPathMaze(n, i, j+1);
}
int main(){
    cout<<countPathMaze(3, 0, 0);
    return 0;
}