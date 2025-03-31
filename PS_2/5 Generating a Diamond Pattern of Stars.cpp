#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void generate_diamond_pattern(int size){

    for (int i = 1; i <= size; i += 2) {
        cout << string((size - i) / 2, ' ') << string(i, '*') << endl;
    }

    // Lower part of the diamond
    for (int i = size - 2; i >= 1; i -= 2) {
        cout << string((size - i) / 2, ' ') << string(i, '*') << endl;
    }

}

int main() {

	int n;
	cin>>n;

	generate_diamond_pattern(n);
    
    return 0;
}


/*
testcase :-

5

  *
 ***
*****
 ***
  *

7

   *
  ***
 *****
*******
 *****
  ***
   *
*/