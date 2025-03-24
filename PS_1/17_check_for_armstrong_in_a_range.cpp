#include<bits/stdc++.h> 
using namespace std;

bool armstrong(int n){
	
	int original = n;
	int rem=0,sum = 0;
	while(n){
		rem = n %10;
		
		sum += rem*rem*rem;
		
		n/= 10;
	}
	
	if(original == sum) return true;
	else return false;
}

void find_armstrong(int a, int b){
	
	vector<int> armstrong_array;
	for(int i = a; i<=b; i++){
		
		if(armstrong(i)){
			armstrong_array.push_back(i);
		}
	}
	
	for(auto it : armstrong_array){
		cout<<it<<" ";
	}cout<<endl;
	if(armstrong_array.size() == 0) cout<<"no armstrong in range";
}


int main() {
	
	int a,b;
	cin>>a>>b;
	
	find_armstrong(a,b);
    
    return 69;
}
