#include<bits/stdc++.h> 
using namespace std;

void isperfect(int n){
	vector<int> divisors;
	for(int i = 1;i<=n/2; i++){
		if(n%i ==0) divisors.push_back(i);
	}
	
	int sum = 0;
	for(auto it :divisors){
		sum += it;
	}
	if(sum == n) cout<<"yes "<<n<<" is a perfect number";
	else cout<<"no "<<n<<" is not a perfect number";
}


int main() {
	
	int n;
	cin>>n;
	
	isperfect(n);
    
    return 69;
}
