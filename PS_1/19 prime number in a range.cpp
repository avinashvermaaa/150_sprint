#include<bits/stdc++.h> 
using namespace std;


bool isprime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

void find_prime(int a, int b){
	
	vector<int> primes;
	
	for(int i = a; i<=b; i++){
		if(isprime(i) ) primes.push_back(i);
	}
	
	for(auto it : primes){
		cout<<it<<" ";
	}cout<<endl;

	
}


int main() {
	
	int a,b;
	cin>>a>>b;
	
	find_prime(a,b);
    
    return 69;
}
