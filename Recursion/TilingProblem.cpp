//Given a "2*n" board and tiles of size "2*1", count the number of ways to tile the given board using these tiles
#include<iostream>
#include<algorithm>
using namespace std;
int tilePlace(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    return tilePlace(n-1) + tilePlace(n-2);
}
int main(){
    cout<<tilePlace(4);
    return 0;
}