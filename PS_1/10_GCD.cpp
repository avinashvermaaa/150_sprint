#include<bits/stdc++.h> 
using namespace std;

int GCD(int a, int b){
    
        if(b == 0) return a;
        else GCD(b, a % b);
        
}


int main() {
    
    int a,b;
    cin>>a>>b; 
    
    int gcd = GCD(a,b);
    cout<<gcd<<endl;   
    
    return 0;
}

