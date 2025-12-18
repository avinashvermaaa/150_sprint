#include<bits/stdc++.h>

using namespace std;

int main(){
	int number;
	cin>>number;

	int digit = 0;
	if(number == 0) digit = 1;
	else{
		while(number){
			digit++;
			number /= 10;
		}
	}

	cout<<digit<<endl;
}