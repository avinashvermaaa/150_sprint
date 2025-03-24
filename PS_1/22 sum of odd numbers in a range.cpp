#include<bits/stdc++.h> 
using namespace std;

void sum_odd_range(int a, int b){
	
	int sum = 0;
	
	for(int i = a;i<=b;i++){
		if(i&1)sum += i;
	}
	cout<<"sum of odd number in "<<a<<" to "<<b<<" is --> "<<sum<<endl;
	
}

int main() {
	
	int a,b;
	cin>>a>>b;
	
	sum_odd_range(a,b);
    
    return 69;
}
