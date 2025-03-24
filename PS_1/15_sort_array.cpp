#include<bits/stdc++.h> 
using namespace std;

void sort_array(vector<int> arr){
	
	int n = arr.size();
	
	for(int i = 0;i<n; i++){
		for(int j = i;j<n;j++){
			if(arr[i] > arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
	
	cout<<"sorted array is : ";
	for(auto it : arr){
		cout<<it<<" ";
	}
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
    
    sort_array(arr);

    
    return 69;
}
