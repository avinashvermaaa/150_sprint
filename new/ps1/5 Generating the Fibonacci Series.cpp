#include <bits/stdc++.h>
using namespace std;

vector<int> fibonacci(int number){
	vector<int> arr(number);

	arr[0] = 0;
	arr[1] = 1;
	for(int i = 2; i<=number; i++){
		arr[i] = arr[i-2] + arr[i-1];
	}

	return arr;
}


int main(){
	int number ;
	cin>>number;

	vector<int> fibonacci_seq = fibonacci(number);
	for(auto it : fibonacci_seq){
		cout<<it<<" ";
	}
}