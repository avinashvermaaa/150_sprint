#include<bits/stdc++.h>

using namespace std;

const long long N = 1e5;
vector<long long> fibonacci(N,-1);

long long fib(long long number){
	if(number <= 0) return 0;
	if(number == 1) return 1;

	if(fibonacci[number] != -1) return fibonacci[number];

	return fibonacci[number] = fib(number - 1) + fib(number - 2);
}

int main(){

	int number;
	cin>>number;

	vector<long long> fib_seq(number);
	for(long long i = 0;i<number; i++){
		fib_seq[i] = fib(i);
	}

	for(auto it : fib_seq){
		cout<<it<<" ";
	}cout<<endl;

	return 0;
}