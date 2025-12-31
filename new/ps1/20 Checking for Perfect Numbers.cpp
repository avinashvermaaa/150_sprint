#include<bits/stdc++.h>

using namespace std;

bool  is_perfect_number(int number){
	if(number == 1) return true;
	if(number <= 2) return false;
	 int sum = 0;
	 for(int i = 1; i<=number/2; i++){
	 	if(number % i == 0){
	 		sum += i;
	 	}
	 }

	 return (sum == number);
}

int main(){
	int number;
	cin>>number;

	bool answer = is_perfect_number(number);
	answer ? cout<<"yes" : cout<<"no";
	cout<<endl;
	return 0;
}