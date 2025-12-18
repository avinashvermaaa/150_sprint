#include<bits/stdc++.h>

using namespace std;

void count_vowels_consonants(string word){
	int n = word.size();
	int vowel =0,consonant = 0;
	for(int i = 0;i<n;i++){
		char ch = word[i];
		if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
			if(ch >= 'A' && ch <= 'Z'){
				ch += 32;
			}

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowel++;
            else
                consonant++;
		} 

	}

	cout<<vowel<<" "<<consonant<<endl;
}

int main(){

	string word;
	getline(cin,word);

	count_vowels_consonants(word);
}