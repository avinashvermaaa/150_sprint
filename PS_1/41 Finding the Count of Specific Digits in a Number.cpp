#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void find_count_of_number(int n, int digit){

	int count = 0;

	while(n){
		int unit_digit = n % 10;
		if(unit_digit == digit) count++;

		n /= 10;
	}

	cout<<count<<endl;


}

int main() {

	int n,digit;
	cin>>n>>digit;

	find_count_of_number(n, digit);
    
    return 0;
}


/*
testcase :-

122333 3
 3

122333 2
 2

122333 1
 1

122333 4
 0

*/