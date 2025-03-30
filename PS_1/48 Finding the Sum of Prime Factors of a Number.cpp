#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

vector<int> all_factors_of_n(int n){
	vector<int> divisors;

	for(int i= 1; i<=n; i++){
		if(n % i == 0) divisors.push_back(i);
	}

	return divisors;
}

bool isprime(int n){
	if(n <= 1) return false;
	if(n <= 3) return true;
	if(n%2 == 0 || n%3 == 0) return false;

	for(int i = 5; i*i <=n; i+=6){
		if(n % i ==0 || n % (i+2) == 0) return false;
	}

	return true;
}

void find_sum_of_prime_factor(int n){
	vector<int> divisors = all_factors_of_n(n);

	int sum = 0;
	for(auto it : divisors){
		if(isprime(it)){
			sum += it;
		}
	}

	cout<<sum<<endl;
}

int main() {

	int n;
	cin>>n;

	find_sum_of_prime_factor(n);
    
    return 0;
}


/*
testcase :-


12
 5

15
 8

26
 15

*/