#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

int gcd(int a, int b){

	if(b == 0) return a;
	return gcd(b, a%b);

}

int find_gcd(int n, vector<int> arr){
	int curr_gcd = arr[0], a;

	for(int i = 1;i<n;i++){
		a = arr[i];
		curr_gcd = gcd(a,curr_gcd);

		if(curr_gcd == 1) break;
	}

	return curr_gcd;
}

int main() {

	int n;
	cin>>n;

	vector<int> arr(n);
    for(int i= 0;i<n;i++){
    	int x;
    	cin>>x;
    	arr[i] = x;
    }

    int gcd = find_gcd(n,arr);
   	cout<<gcd<<endl; 

    return 0;
}


/*
testcase :-

5
2 4 6 13 15
 1

3
12 24 36
 12

10
1 2 3 4 5 6 7 8 9 10
 1

10
10 20 30 40 50 60 70 80 90 100
 10

*/