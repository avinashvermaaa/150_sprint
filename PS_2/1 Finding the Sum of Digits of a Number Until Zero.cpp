#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void find_sum(int n){

	while(n >= 10){
		int digits_sum = 0;
		while(n){
			int unit_digit = n % 10;
			digits_sum += unit_digit; 
			n /= 10;
		}
		n = digits_sum;
	}
	cout<<n<<endl;
}


int main() {
	int n;
	cin>>n;

	find_sum(n);

    return 0;
}

/*
testcase :-

123
 6

1234
 1

0
 0

10
 1

*/
