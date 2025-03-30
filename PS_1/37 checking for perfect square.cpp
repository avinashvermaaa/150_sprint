#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;


void check_for_perfect_square(int square){
	int sq_root = sqrt(square);
	int new_square  = sq_root * sq_root;

	if(square == new_square){
		cout<<"YES, "<<square<<" is a perfect square"<<endl;
	}
	else cout<<"NO, "<<square<<" is not a perfect square"<<endl;
}


int main() {

	int n;
	cin>>n;

	check_for_perfect_square(n);
    
    return 0;
}

/*
testcase :-


16
 YES, 16 is a perfect square

17
 NO, 17 is not a perfect square

25
 YES, 25 is a perfect square

26
 NO, 26 is not a perfect square

1
 YES, 1 is a perfect square

2
 NO, 2 is not a perfect square
*/