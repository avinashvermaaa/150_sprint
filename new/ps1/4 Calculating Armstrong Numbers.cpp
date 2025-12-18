#include <bits/stdc++.h>
using namespace std;

bool is_armstrong(int number){
	int sum = 0,original_number = number;
	while(number){
		int rem = number % 10;
		sum += rem*rem*rem;
		number /= 10;
	}

	if(original_number == sum ) return true;
	return false;

}


int main(){
	int number ;
	cin>>number;

	bool answer = is_armstrong(number);
	answer ? cout<<"yes armstrong": cout<<"not armstrong";
	cout<<endl;
}