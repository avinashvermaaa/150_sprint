#include<bits/stdc++.h> 
using namespace std;

int factorial(int n){
	
	if(n <= 1) return 1;
	
	int facto = 1;
	
	for(int i = 1;i<=n;i++){
		facto = facto * i;
	}
	
	return facto;
}


void sum_of_digits(int n){
	
	int facto = factorial(n); 
	int sum = 0;
	
	while(facto){
		int unit = facto % 10;
		
		sum += unit;
		
		facto /= 10;
	}
	
	cout<<sum<<endl;
	
}

int main() {
	
	int n;
	cin>>n;
	
	sum_of_digits(n);
    
    return 69;
}

/*
testcases :- 

1
 1

0
 1

2
 2

3
 6

4
 6

5
 3

6
 9
*/