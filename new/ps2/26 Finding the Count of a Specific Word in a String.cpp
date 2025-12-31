#include<bits/stdc++.h>
using namespace std;

int main(){

	string sentence;
	getline(cin, sentence);

	string word_match, match;
	cin>>word_match;

	stringstream ss(sentence);

	int count = 0;
	while(ss >> match ){
		if(match == word_match){
			count++;
		}
	}
	cout<<count<<endl;

	return 0; 
}