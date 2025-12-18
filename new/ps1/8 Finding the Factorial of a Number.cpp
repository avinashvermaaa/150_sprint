#include <bits/stdc++.h>

using namespace std;

long long int factorial(int number){
	long long int factorial = 1;
	while(number){
		factorial *= number;
		number--;
	}

	return factorial;
}

int main(){
	int number;
	cin>>number;

	cout<< factorial(number);
}