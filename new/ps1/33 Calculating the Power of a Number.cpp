#include<bits/stdc++.h>
using namespace std;


void expo(unsigned long long base, unsigned long long exponent){

	unsigned long long  result = 1;
	while(exponent){
		if(exponent & 1){
			result *= base;
		}

		base *= base;
		exponent >>= 1;
	}

	cout<<result<<endl;
}



int main(){

	unsigned long long base,exponent;
	cin >> base >> exponent;

	expo(base, exponent);


	return 0;
}