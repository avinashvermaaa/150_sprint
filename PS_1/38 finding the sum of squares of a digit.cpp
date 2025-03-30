#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void sum_of_squares_of_digit(int n){

	int ans = 0;

	while(n){
		int unit_digit = n % 10;
		ans += unit_digit * unit_digit;

		n /= 10;
	}

	cout<<ans<<endl;

}

int main() {

	int n;
	cin>>n;

	sum_of_squares_of_digit(n);
    
    return 0;
}

/*
testcase :-

12
 5

123
 14

100
 1

25
 29

*/