#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void generate_matrix(int n){
	int k = 1;
	for(int i = 0;i<n;i++){
		for(int j = 0; j<n; j++){
			cout<<k<<" ";
			k++;
		}cout<<endl;
	}
}


int main() {

	int n;
	cin>>n;

	generate_matrix(n);
    
    return 0;
}


/*
testcase :-


3
 1 2 3
 4 5 6 
 7 8 9

5
 1 2 3 4 5
 6 7 8 9 10 
 11 12 13 14 15 
 16 17 18 19 20 
 21 22 23 24 25

*/