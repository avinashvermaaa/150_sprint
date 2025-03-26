#include<bits/stdc++.h> 
using namespace std;

void missing_number(int n, vector<int> arr,int array_sum){
	
	int estimated_sum = n*(n+1) / 2;
	int missing_number  = estimated_sum - array_sum;
	
	cout<<"missing number is : "<<missing_number<<endl;

}

int main() {
	
	int n;
	cin>>n;
	vector<int> arr(n-1);
	
	int array_sum  = 0;	
	
	for(int i = 0;i<n-1;i++){
		int x; cin>>x;
		arr[i] = x;
		array_sum += arr[i];
	}
	
	missing_number(n, arr, array_sum);
    
    return 69;
}

/*
testcases :-

6
1 2 3 5 6
 missing number is : 4

5
1 2 3 5
 missing number is : 4

*/