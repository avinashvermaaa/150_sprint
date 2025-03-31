#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void find_pair(int n, vector<int> arr, int target){

	unordered_map<int,int> mp;

	for(auto it :arr){
		mp[it]++;
	}

	int diff = 0;

	vector<pair<int,int>> vp;

	for(auto it : arr){
		diff = target - it;
		if(mp.find(diff) != mp.end()){
			vp.push_back({it,diff});
		}
	}

	for(auto it : vp){
		cout<<it.first<<" "<<it.second<<endl;
	}

}

int main() {
    
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0;i<n;i++){
    	int x; cin>>x;
    	arr[i] = x;
    }
    int target; cin>> target;

    find_pair(n,arr,target);
    
    return 0;
}

/*
testcase :-

5
1 2 3 4 5
5

	1 4
	2 3
	3 2
	4 1

5
1 1 2 4 5
5

	1 4
	1 4
	4 1

6
0 1 2 3 4 5
5

	0 5
	1 4
	2 3
	3 2
	4 1
	5 0

*/