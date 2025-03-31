#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void calculate_harmonic_sum(int n){

    double sum = 0.0;

	if(n<= 1e6){
	    for (int i = 1; i <= n; i++) {
	        sum += 1.0 / i;
	    }
	}

	// for n > 1e6 (10^6)
	else{
    const double gamma = 0.57721; // Euler-Mascheroni constant
	    sum = log(n) + gamma;
	}

	    cout<< fixed<<setprecision(6)<<sum<<endl;

}

int main() {

	int n;
	cin>>n;

	calculate_harmonic_sum(n);
    
    return 0;
}


/*
testcase :-


4
 2.083333

10
 2.928968

1000000
 14.392727

1000000000
 21.30047

*/