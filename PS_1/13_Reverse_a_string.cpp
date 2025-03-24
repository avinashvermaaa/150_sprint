#include<bits/stdc++.h> 
using namespace std;

string reverse(string word){
	
	int size= word.size();
	
	int mid = size / 2;
	size--;
	
	for(int i = 0;i<mid;i++){
		swap(word[i], word[size - i]);
	}
	
	return word;
}


int main() {
	
	string word;
	cin>>word;
	
	string reverse_word = reverse(word);
	
	cout<<reverse_word<<endl; 
	
    return 69;
}
