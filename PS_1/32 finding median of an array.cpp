#include<bits/stdc++.h> 
using namespace std;

void get_median(int n, vector<int> arr){
	
	if(n&1){
		sort(begin(arr),end(arr));
		n /= 2;
		cout<<arr[n]<<endl;
	}
	
	else{
		int mid1 = arr[n/2];
		int mid2 = arr[n/2 - 1];
		
		int mid = (mid1 + mid2) / 2 ;
		cout<<mid<<endl;
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
	
	get_median(n,arr);
    
    return 69;
}


/*


5
1 2 3 4 5
 3

4
1 2 3 4
 2

6
1 2 3 3 4 5
 3

*/
