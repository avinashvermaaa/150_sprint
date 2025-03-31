#include<bits/stdc++.h> 
using namespace std;

void sum_array_elements(vector<int> arr){
	int n = arr.size();
	int sum = 0;
	
	for(int i = 0;i<n; i++){
		sum += arr[i];
	} 
	
	cout<<"Sum of array elements is : "<<sum<<endl;
}


int main() {
	
	int n;
	cin>>n;   
	vector<int> arr(n);
	
	for(int i = 0;i<n;i++){
		int x; 
		cin>>x;
		
		arr[i] = x;
	}
	
	sum_array_elements(arr);
    
    return 69;
}
