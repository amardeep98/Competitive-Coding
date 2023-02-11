//Reduce an array so that it stores the order of the elements in the array
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
bool myCompare(pair<int, int> p1, pair<int, int> p2){
    return p1.first<p2.first;
}
int main(){
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    
    for(auto element: arr){
        cout<<element<<" ";
    }
    cout<<endl;
    vector<pair<int, int>> v;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        v.push_back(make_pair(arr[i], i));   //make_pair() makes a pair with two given values
    }
    sort(v.begin(), v.end(), myCompare);
    for(int i=0; i<v.size(); i++){
        arr[v[i].second] = i;
    }
    for(auto element: arr){
        cout<<element<<" ";
    }
}
/*
Input:
10, 16, 7, 14, 5, 3, 12, 9
Output:
4 7 2 6 1 0 5 3

smallest element is at 5th place, so at 5th place, it is reduced to 0
2nd smallest element is at 4th place, so at 4th place, it is reduced to 1
and so on..
*/