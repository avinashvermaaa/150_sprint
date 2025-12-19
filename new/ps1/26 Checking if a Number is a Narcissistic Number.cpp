#include<bits/stdc++.h>

using namespace std;

void is_armstrong(int number){
	int original_number = number, sum = 0;
     

	while(number){
		int rem = number % 10;
		rem *= rem * rem;
		sum += rem;
		number /= 10;
	}

	original_number == sum ? cout<<"yes" : cout<<"no";
	cout<<endl;
}

int main(){

	int number;
	cin>>number;


	is_armstrong(number);
}