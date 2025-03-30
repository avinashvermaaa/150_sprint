#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void sum_of_digits_until_single_number(int n) {
    while (n >= 10) {
        int sum_of_digits = 0;
        while (n) {
            sum_of_digits += n % 10;
            n /= 10;
        }
        n = sum_of_digits;
    }
    cout << n << endl;
}



int main() {

	int n;
	cin>>n;

	sum_of_digits_until_single_number(n);
    
    return 0;
}


/*
testcase :-

9875
 2

5
 5

12345
 6

*/