#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void find_second_largest_number_in_array(int n,vector<int> arr){

	int second_maxi = INT_MIN;
	int maxi = INT_MIN;

	for(int i = 0;i<n;i++){
		if(arr[i] >= maxi){
			second_maxi = maxi;
			maxi = arr[i];
		}

		else if( arr[i]>= second_maxi && i < maxi){
			second_maxi = arr[i];
		}
	}

	cout<<"second maximum value in given array is : "<<second_maxi<<endl;

}

int main() {

	int n;
	cin>>n;

	vector<int> arr(n);

	for(int i = 0;i<n; i++){
		int x; cin>>x;
		arr[i] = x;
	}
	
	find_second_largest_number_in_array(n, arr);    
    
    return 0;
}


/*
testcase :-


5
1 2 3 4 5
 second maximum value in given array is : 4

5
1 2 68 69 40
 second maximum value in given array is : 68

8
1 2 3 4 5 68 69 70
 second maximum value in given array is : 69

*/