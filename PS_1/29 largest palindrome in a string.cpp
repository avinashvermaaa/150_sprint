#include<bits/stdc++.h> 
using namespace std;

bool check_palindrome(string str){
	
	int n = str.size();
	int last = n-1;
	
	for(int i = 0;i<n;i++){
		if(str[i] == str[last-i]) continue;
		else return false;
	}
	
	return true;
}

void get_largest_plaindrome(string str){
	
	int n = str.size(), max_size = 0;
	string largest_string = "";
	
	for(int i = 0;i<n;i++){
		string word = "";
		for(int j = i;j<n;j++){
			word += str[j];
			if(check_palindrome(word)){
				int curr_size = word.size();
				if(curr_size >= max_size){
					max_size = curr_size;
				  	largest_string = word;
				}
			}
		}
	}
	
	cout<<largest_string<<endl;
	
}

int main() {
	
	string str;
	cin>>str;
	
	get_largest_plaindrome(str);
    
    return 69;
}


/*
testcases :- 

avivanash
 aviva

babad
 aba

abba
 abba

baba
 aba

avinash
 h

*/