#include<bits/stdc++.h> 

using namespace std;

bool isleap(int n){
	
	if( (n % 400 == 0 ) || (n%4==0 && n%100 !=0) ){
		return true;
	}
	
	return false;
	
}


int main(){
	
	int n;
	cin>>n;   
	
	bool check = isleap(n);
	
	check ? cout<<"leap" : cout<<"not leap";
	
	cout<<endl;
	
	return 0;
}