//print all the permutations from a collection of  distinct numbers
#include "bits/stdc++.h"
#include<stdint.h>
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> &a, int idx){
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }
    for(int i = idx; i<a.size(); i++){
        swap(a[i], a[idx]);
        permute(a, idx+1);
    }
    return;
}
int32_t main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    //permute (a, 0);
    sort(a.begin(), a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(), a.end()));
    
    for(auto v : ans){
        for(auto i : v)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}

/*
sort(a.begin(), a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(), a.end()));

this is another way, it sorts the array and pushes the answer until next permutation exists

*/