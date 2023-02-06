#include<iostream>
#include<string>
using namespace std;
void lettercount(string str);
int main(){
	string str = "wwwwkkkkihhggg";       //to print- w4k4i1h2g3
	lettercount(str);
	return 0;
}
void lettercount(string str){
	int length=str.length();
	char local=str[0];
	int count=0;
	for(int i=0;i<length;i++){
		if(str[i]==str[i+1]){
			count++;
		}
		else{
			cout<<local<<++count;
			local=str[i+1];
			count=0;
		}
	}
}