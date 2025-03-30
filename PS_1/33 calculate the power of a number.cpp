#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void calculate_power(unsigned long long a, unsigned long long b){

	unsigned long long power_value = 1;
	while(b){
		if(b&1){
			power_value = power_value * a;
		}

		a *= a;
		b>>= 1;
	}

	cout<<power_value<<endl;
}

int main() {

	unsigned long long a,b;
	cin>>a>>b;

	calculate_power(a,b);

    return 0;
}

/*
testcase :-


2 5
 32

2 10
 1024

2 12
 4096

2 32
 4294967296

2 62
 4611686018427387904

2 63
 9223372036854775808

2 65
 0
*/
