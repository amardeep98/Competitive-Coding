//To find the longest word in a sentence
#include<iostream>
#include<limits>
#include<ios>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char sentence[n+1];
    cin.getline(sentence, n);
    cin.ignore();
    int currLen=0, maxLen=0;
    int st = 0, maxst = 0;
    for(int i=0; i<n; i++){
        if(sentence[i] == ' ' || sentence[i] == '\0'){
            if(currLen > maxLen){
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i+1;
        }
        else{
            currLen++;
        }
    }
    cout<<maxLen<<endl;
    for(int i=0; i<maxLen; i++){
        cout<<sentence[i+maxst];
    }
    return 0;
}
