//Diamond Pattern
#include<iostream>
using namespace std;
int main(){
    int n, k=0;
    //cout<<"Enter a number:";
    cin>>n;
    for(int i=1; i<=(2*n-1); i++){
        if(i<=n)
            k++;
        else
            k--;
        for(int j=1; j<=(2*n-1); j++){
            if((j==(n+1)-k) || (j==(n-1)+k)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}