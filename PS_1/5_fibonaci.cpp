#include<bits/stdc++.h> 

using namespace std;

void fibonaci(int n){
	
	vector<int> arr;
	arr.push_back(0);
	arr.push_back(1);
	
	for(int i = 1;i<n;i++){
		arr.push_back(arr[i] + arr[i-1]);
	}
	
	for(int i = 0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}


int main(){
	
	int n;
	cin>>n;   
	
	fibonaci(n);
	
	
	return 0;
}