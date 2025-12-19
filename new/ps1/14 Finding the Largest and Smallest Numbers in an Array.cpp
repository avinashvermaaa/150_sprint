#include<bits/stdc++.h>
using namespace std;

pair<int,int> get_large_and_small(vector<int> arr){
	int small,large, n =arr.size();
	small = arr[0];
	large = arr[0];

	for(int i = 1;i<n;i++){
		if(arr[i] >= large){
			large = arr[i];
		}
		if(arr[i]<= small){
			small = arr[i];
		}
	}

	return {small, large};
}

int main(){
	vector<int> arr;
	int x, n;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>x;
		arr.push_back(x);
	}

	pair<int,int> large_and_small = get_large_and_small(arr);
	cout<<large_and_small.first<<" "<<large_and_small.second<<endl;

}