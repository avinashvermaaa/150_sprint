#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

int get_factors_sum(int n) {
    int sum = 1; 

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    return (n == 1) ? 0 : sum; 
}


void get_perfect_number(int n){
    vector<int> arr;
    for(int i = 2; i <= n; i++){
        if(get_factors_sum(i) == i){
            arr.push_back(i);
        }
    }

    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;
}


int main() {

	int n;
	cin>>n;

	get_perfect_number(n);
    
    return 0;
}


/*
in python -> bc 4 line ka code h sirf

def is_perfect(n):
    return sum([i for i in range(1, n) if n % i == 0]) == n

limit = 30
perfect_numbers = [i for i in range(2, limit + 1) if is_perfect(i)]
print("Perfect numbers up to", limit, "are:", perfect_numbers)
print("Count:", len(perfect_numbers))

*/


/*
testcase :-

30
 6 28

1000
 6 28 496

10000
 6 28 496 8128

*/