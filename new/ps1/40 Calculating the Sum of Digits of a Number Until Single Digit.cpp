#include<bits/stdc++.h>

using namespace std;

int sum_of_digits(int number){

	int sum = 0;
	while(number){
		sum += number % 10;
		number /= 10;
	}
	if(sum >= 10){
		sum = sum_of_digits(sum);
	}

	return sum;
}

int main(){

	int number;
	cin>> number;

	if(number <= 0) number *= -1;
	int sum = sum_of_digits(number);
	cout<<sum<<endl;


	return 0;
}