#include<bits/stdc++.h>
using namespace std;

 int main(){
 	int number;
 	cin>>number;

 	vector<int> arr;

 	int x;
 	for(int i = 0;i<number;i++){
 		cin>>x;
 		arr.push_back(x);
 	}

 	int sum = accumulate(arr.begin(),arr.end(),0);
 	cout<<sum;
 }