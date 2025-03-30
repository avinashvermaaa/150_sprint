#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

const int N = 1e5;

vector<int> fibonacci(N,-1);

int fibonacci_using_recursion(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (fibonacci[n] != -1) return fibonacci[n]; 

    return fibonacci[n] = fibonacci_using_recursion(n - 1) + fibonacci_using_recursion(n - 2);
}


int main() {

	int n;
	cin>>n;

    vector<int> fib_sequence(n);
    for (int i = 0; i < n; i++) {
        fib_sequence[i] = fibonacci_using_recursion(i);
    }

    for (auto it : fib_sequence) {
        cout << it << ", ";
    }
    cout << endl;


    return 0;
}


/*
testcase :-

2
 0, 1,

3
 0, 1, 1,

5
 0, 1, 1, 2, 3,

*/