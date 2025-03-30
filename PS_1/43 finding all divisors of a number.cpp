#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void find_all_divisors_of_number(int n){

	unordered_set<int> set;

	for(int i = 1; i*i <= n; i++){
		if(n%i == 0){
			set.insert(i);
			set.insert(n / i);
		}
	}
	vector<int> array( set.begin(),set.end() );
	
	sort(begin(array), end(array));

	for(auto it : array){
		cout<<it<<" ";
	}cout<<endl;


}

int main() {

	int n;
	cin>>n;

	find_all_divisors_of_number(n);
    
    return 0;
}

/*
testcase :-

12
 1 2 3 4 6 12

36
 1 2 3 4 6 9 12 18 36

69
 1 3 23 69

*/

