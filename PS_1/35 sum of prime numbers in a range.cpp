#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

bool isprime(int n){
	if(n <= 1) return false;;
	if(n<=3) return true;

	if( n%2 == 0 || n%3 == 0) return false;

	for(int i = 5; i*i <= n; i+=6){
		if(n%i ==0 || n%(i+2) == 0) return false;
	}

	return true;
}

void sum_of_primes(int n){

	int sum = 0;

	for(int i = 1; i<=n; i++){
		if(isprime(i)){
			sum += i;
		}
	}

	cout<<sum<<endl;

}

int main() {

	int n;
	cin>>n;

	sum_of_primes(n);
    
    
    return 0;
}


/*
testcase :-

5
 10

9
 17

10
 17

11
 28

*/
