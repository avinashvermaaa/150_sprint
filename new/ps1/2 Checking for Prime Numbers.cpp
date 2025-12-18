#include<bits/stdc++.h>

using namespace std;

bool check_prime(int n){
	if(n<=1) return false;

	bool answer = true;
	int count = 0;
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i == 0){
			count++;
			if(count >= 1){
				answer = false;
				break;
			}
		}
	}

	return answer;
}

int main(){

	int n;
	cin>>n;

	bool isprime = check_prime(n);
	isprime ? cout<<"prime" : cout<<"not_prime";
	cout<<endl;
}