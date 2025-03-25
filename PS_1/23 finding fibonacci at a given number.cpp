#include<bits/stdc++.h> 
using namespace std;

void get_fibonacci(int n){
	vector<int> fibonacci;
	
	fibonacci.push_back(0);
	fibonacci.push_back(1);
	
	for(int i = 2;i<n;i++){
		int next_element = fibonacci[i-1] + fibonacci[i-2];;
		fibonacci.push_back(next_element);
	}
	
	cout<< n<<"th fibonacci number is : "<<fibonacci.back();
}

int main() {
	
	int n;
	cin>>n;
	
	get_fibonacci(n);
    
    return 69;
}
