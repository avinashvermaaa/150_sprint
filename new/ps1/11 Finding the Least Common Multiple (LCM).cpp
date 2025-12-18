#include<bits/stdc++.h> 
using namespace std;

long long GCD(long long a, long long b){
        if(b == 0) 
            return a;
        else 
            return GCD(b, a % b);
}


int main() {
    
    long long a,b;
    cin>>a>>b; 
    
    long long gcd = GCD(a,b);
    long long lcm = (1ll*a*b ) / gcd;    
    cout<<lcm<<endl;
    // cout<<log10(INT_MAX)<<endl;
    return 0;
}