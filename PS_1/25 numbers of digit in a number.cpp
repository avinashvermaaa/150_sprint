#include<bits/stdc++.h> 
using namespace std;

void get_digits(int n){
	
	// for negative numbers re
	n = abs(n);
	
	int digits = log10(n) + 1;
	
	// if nwa is zero re
	if(n == 0) digits = 1;
	cout<<digits;
	
}

int main() {
	
	int n;
	cin>>n;
	
	get_digits(n);
	
    return 69;
}
