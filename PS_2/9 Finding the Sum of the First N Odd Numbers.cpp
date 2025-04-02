#include<bits/stdc++.h> 
using namespace std;

void sum_of_odd_number(int n){
	
	int sum = 0;
	
	for(int i = 1;i<=2*n;i++){
		if(i&1)sum += i;
	}
	cout<<"sum of first "<<n <<" odd numbers is "<<sum<<endl;
	
}

int main() {
	
	int n;
	cin>>n;
	
	sum_of_odd_number(n);
    
    return 69;
}