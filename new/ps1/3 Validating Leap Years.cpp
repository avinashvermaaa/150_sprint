#include <bits/stdc++.h>
using namespace std;

bool is_leap_year(int year){
	if((year % 400 ==0) || (year % 4 ==0 && year % 100 != 0) ){
		return true;
	}

	return false;
}

int main(){
	int year;
	cin>>year;

	bool leap = is_leap_year(year);
	leap ? cout<<"yes leap" : cout<<"not leap";
	cout<<endl;
}