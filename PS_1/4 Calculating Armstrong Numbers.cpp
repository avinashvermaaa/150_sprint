#include<bits/stdc++.h> 

using namespace std;

bool isarmstrong(int n){
	
	int original = n;
	int sum = 0;
	while(n){
		int rem = n%10;
		rem *= rem * rem;
		
		sum += rem;
		
		n/= 10;
	}
	
	return (original == sum );
	
}


int main(){
	
	int n;
	cin>>n;   
	
	bool check = isarmstrong(n);
	
	check ? cout<<n<<" is an armstrong number" : cout<<n<<" not an armstrong number";
	
	cout<<endl;
	
	return 0;
}