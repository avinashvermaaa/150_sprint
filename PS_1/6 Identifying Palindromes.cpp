#include<bits/stdc++.h> 

using namespace std;

bool is_palindrome(string str){
	
	int n = str.size();
	n--;
	int mid = n/2;
	for(int i = 0; i<=mid; i++){
		if(str[i] == str[n-i]) continue;
		else return false;
	}
	
	return true;
	
}


int main(){
	
	string str;
	cin>>str;   
	
	bool check = is_palindrome(str);
	
	check ? cout<<"yes it is palindrome" : cout<<"no it is not palindrome";
	cout<<endl;	
	
	return 0;
}