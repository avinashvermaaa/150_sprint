#include<bits/stdc++.h> 
using namespace std;

int GCD(int a, int b){
    
        if(b == 0) return a;
        else GCD(b, a % b);
        
}

int LCM(int a, int b){
    int gcd = GCD(a,b);
    
    int axb = a*b;
    
    int lcm = axb / gcd;
    
    return lcm;
    
}


int main() {
    
    int a,b;
    cin>>a>>b; 
    
    int lcm = LCM(a,b);
    
    cout<<lcm<<endl;
    
    
    return 0;
}

