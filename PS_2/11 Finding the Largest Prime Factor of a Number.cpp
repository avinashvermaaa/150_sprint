#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

bool isprime(int n){
	if(n <= 1) return false;
	if(n <= 3) return true;

	if(n % 2 == 0 || n % 3 == 0) return false;

	for(int i = 5; i* i <= sqrt(n); i += 6){
		if(n% i == 0 || n%(i+2) == 0) return false;
	}

	return true;
}

void get_largest_prime_factor_number(int n){

	vector<int> arr;

	for(int i = 1; i<=n;i++){
		if( n% i == 0) arr.push_back(i);	
	}	

	int largest_factor = 0;

	for(auto it : arr){
		if(isprime(it)){
			largest_factor = max(largest_factor, it);
		}
	}

	cout<<largest_factor<<endl;

}

int main() {

	int n;
	cin>>n;

	get_largest_prime_factor_number(n);
    
    return 0;
}


/*
testcase :-

28
 7

40
 5

*/