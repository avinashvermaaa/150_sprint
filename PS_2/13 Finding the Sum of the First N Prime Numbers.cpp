#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

bool is_prime(int n){

	if(n <= 1) return false;
	if(n <= 3) return true;

	if(n % 2 == 0 || n % 3 == 0) return false;

	for(int i = 5; i*i <= n; i+=6){
		if( ((n% i) ==0) || (n% (i+2)== 0) ) return false;
	}

	return true;
}

void find_sum_of_1st_n_prime_number(int n){

	int i = 2,sum = 0;
	while(n){
		if(is_prime(i)){
			sum += i;
	 		n--;
	 	}

		i++;
	}
	cout<<sum<<endl;
}

int main() {

	int n;
	cin>>n;

	find_sum_of_1st_n_prime_number(n);
    
    return 0;
}


/*
testcase :-


5
 28

4
 17

10
 129

*/