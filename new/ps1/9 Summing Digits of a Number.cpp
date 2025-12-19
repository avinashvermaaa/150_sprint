#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int number){
	int sum = 0,rem = 0;
	while(number){
		rem = number % 10;
		sum += rem;
		number /= 10; 
	}

	return sum;
}

int main(){
	int number;
	cin>>number;

	int sum = sum_of_digits(number);
	cout<<sum<<endl;
}