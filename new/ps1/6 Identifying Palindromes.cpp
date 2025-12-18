#include <bits/stdc++.h>

using namespace std;

void check_palindrome(string word){
	string word_reverse = "";

	for(int i = word.size()-1; i>=0; i--){
		word_reverse += word[i];
	}
	if(word == word_reverse) cout<<"palindrome";
	else cout<<"not palindrome";
}

int main(){
	string word;
	cin>>word;

	check_palindrome(word);
}