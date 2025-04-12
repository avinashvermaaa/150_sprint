#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void generate_fibonacci_matrix(int n){

	int limit = n*n;
	// int arr[n][n];
	vector<vector<int>> arr(n,vector<int>(n));

	int a = 0, b = 1, c;

	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			arr[i][j] = a;
			c = a+b;
			a = b;
			b = c;
		}
	}

	for(auto row : arr){
		for(auto column : row){
			cout<<column<<" ";
		}cout<<endl;
	}

}

int main() {

	int n;
	cin>>n;

	generate_fibonacci_matrix(n);
    
    return 0;
}


/*
testcase:-

3
	0 1 1 
	2 3 5 
	8 13 21

5
	0 1 1 2 3 
	5 8 13 21 34 
	55 89 144 233 377 
	610 987 1597 2584 4181 
	6765 10946 17711 28657 46368

*/