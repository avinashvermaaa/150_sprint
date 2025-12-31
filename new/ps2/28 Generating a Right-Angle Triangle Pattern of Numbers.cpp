#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;



int main() {
    int height;
    cin>> height;

    for(int i = 1;i<=height; i++){
    	for(int j = 1; j<= i; j++){
    		cout<<j<<" ";
    	}cout<<endl;
    }

	return 0;
}