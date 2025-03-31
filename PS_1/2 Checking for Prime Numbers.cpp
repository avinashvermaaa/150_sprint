#include<bits/stdc++.h>

using namespace std;

bool isprime(int n){
	int cnt = 0;
	if(n <= 1) return false;
	for(int i = 2; i <=sqrt(n); i++){
		if(n%i ==0){
			cnt++;
		}
		
		if(cnt >= 1) return false;
	}
	
	return true;
}


int main(){
	
	int n;
	cin>>n;
	
	bool check = isprime(n);
	
	check ? cout<<"prime" : cout<<"not prime";
	
	cout<<endl;
	
	
	return 0;
}