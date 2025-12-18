#include<bits/stdc++.h>
using namespace std;

int main(){
	string word,rev_word;
	cin>>word;
	int n =word.size();
		for(int i = n-1;i>=0;i--){
		rev_word += word[i]; 
	}
	cout<<rev_word<<endl;
}