#include<bits/stdc++.h> 
using namespace std;


bool isprime(int n){
	if(n <= 1) return false;
	if(n <= 3) return true;
	
	if(n%2 ==0 || n%3 == 0) return false;
	
	for(int i = 5; i*i<=n; i+= 6){
		if(n%(i) == 0 || n%(i+2) ==0) return false;
	}
	
	return true;
}

void get_primes(int n){
	vector<int> primes;
	
	for(int i = 0;i <=n; i++){
		if( isprime(i)) primes.push_back(i);
	}
	
	for(auto it : primes){
		cout<<it<<" ";
	}
	cout<<endl;
	
}

int main() {

	int n;
	cin>>n;
	
	get_primes(n);
    
    return 69;
}
