#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void finding_average_of_array(int n,vector<int> arr){
	int sum = 0, average = 0;
	for(auto it : arr){
		sum += it;
	}

	average = sum / n;
	cout<<"average of given array is : "<<average<<endl;
}

int main() {

	int n;
	cin>>n;

	vector<int> arr(n);
	for(int i = 0;i<n;i++){
		int x; cin>>x;
		arr[i] = x;
	}

	finding_average_of_array(n,arr);
    
    return 0;
}

/*
testcase :-

5
1 2 3 4 5
 average of given array is : 3

5
5 5 5 5 5
 average of given array is : 5

5
5 6 7 8 9
 average of given array is : 7

*/
