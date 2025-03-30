#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void check_anagram(string word1, string word2){


	sort(word1.begin(), word1.end());
	sort(word2.begin(), word2.end());

	word1 == word2 ? cout<<"Yes it is an anagram" : cout<<"No it is not an anagram";
	cout<<endl;

}


int main() {

	string word1,word2;
	cin>>word1>>word2;

	check_anagram(word1, word2);
    
    return 0;
}


/*
testcase :-

avinash
aviashn
 Yes it is an anagram

avi
kavi
 No it is not an anagram

silent
listen
 Yes it is an anagram
*/