#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void nth_triangular_number(int n){

	int sum = 0;

	for(int i = 1; i<=n; i++){
		sum += i;
	}

	cout<<sum<<endl;

}

int main() {

	int n;
	cin>>n;

	nth_triangular_number(n);
    
    
    return 0;
}


/*
testcase :-

4
 10

5
 15

10
 55

100
 5050
*/
