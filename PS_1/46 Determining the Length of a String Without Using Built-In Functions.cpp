#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void find_length_of_string(string str){

	int length = 0, i = 0;

	while(str[i] != '\0'){
		length++;
		i++;
	}

	cout<<"length of given string is : "<<length<<endl;

}


int main() {

	string str;
	cin>>str;

	find_length_of_string(str);
    
    return 0;
}

/*
testcase :-

word
 length of given string is : 4

avinash
 length of given string is : 7

abcdefghijklmnopqrstuvwxyz
 length of given string is : 26

1234567890
 length of given string is : 10

*/
