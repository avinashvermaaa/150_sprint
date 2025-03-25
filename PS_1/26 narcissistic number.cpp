#include<bits/stdc++.h> 
using namespace std;

void check_narcissistic(int n){
	int original = n;
	int new_number = 0;
	
	while(n){
		
		int rem = n%10;
		new_number += rem*rem*rem;
		n/= 10;
	}
	
	if(original == new_number) cout<<"yes "<<original<<"  is a narcissistic number"<<endl;
	else cout<<"no "<<original<<" is not a narcissistic number"<<endl;
	
}


int main() {
	
	int n;
	cin>>n;
	
	check_narcissistic(n);
    
    return 69;
}
