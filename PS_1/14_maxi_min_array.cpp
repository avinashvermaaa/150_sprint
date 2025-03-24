#include<bits/stdc++.h> 
using namespace std;


pair<int,int> cal(vector<int> arr){
	int n = arr.size();
	int maxi = arr[0],mini = arr[0];
	for(auto it : arr){
		if(it >= maxi){
			maxi = it;
		}
		else if(it <= mini){
			mini = it;
		}
	}
	
	
	return make_pair(maxi,mini);
}


int main() {
	
	int n;
	cin>>n;
	
	vector<int> arr(n);
	
	for(int i =0;i<n;i++){
		
		int x; cin>>x;
		
		arr[i] = x;
	}
	
	pair<int,int>ans;
	
	ans = cal(arr);
	cout<<"maximun is : "<<ans.first<<", "<<"minimum is : "<<ans.second<<endl;
    
 return 69;

}
