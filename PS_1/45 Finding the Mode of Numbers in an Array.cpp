#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void mode_of_array(int n, vector<int> arr){

	unordered_map<int,int> mp;

	for(auto it : arr){
		mp[it]++;
	}
	int maxi = 0,curr_maxi = 0;
	for(auto it : mp){

		curr_maxi = it.second;

		if(it.second >= maxi){
			maxi = it.first;
		}
	}

	cout<<"mode of given array is : "<<maxi<<endl;

}

int main() {
	int n;
	cin>>n;    

	vector<int> arr(n);
	for(int i = 0;i<n;i++){
		int x; cin>>x;
		arr[i] = x;
	}

	mode_of_array(n, arr);
    
    return 0;
}


/*
testcase :-

7
1 2 2 3 4 4 4
 mode of given array is : 4

7
1 2 3 4 5 6 6
 mode of given array is : 6

7
1 1 1 1 2 2 2
 mode of given array is : 1

*/