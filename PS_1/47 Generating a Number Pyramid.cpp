#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void genrate_number_pyramid(int n){

	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=i; j++){
			cout<<j<<" ";
		}cout<<endl;
	}

}

int main() {

	int n;
	cin>>n;

	genrate_number_pyramid(n);
    
    return 0;
}

/*
testcase :-

4
 1
 1 2 
 1 2 3 
 1 2 3 4

5
 1
 1 2 
 1 2 3 
 1 2 3 4 
 1 2 3 4 5

10
 1
 1 2 
 1 2 3 
 1 2 3 4 
 1 2 3 4 5 
 1 2 3 4 5 6 
 1 2 3 4 5 6 7 
 1 2 3 4 5 6 7 8 
 1 2 3 4 5 6 7 8 9 
 1 2 3 4 5 6 7 8 9 10
*/
