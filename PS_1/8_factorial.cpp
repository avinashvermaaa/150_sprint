#include<bits/stdc++.h> 
using namespace std;

void cal_factorial(int number){
    
    int factorial = 1;
    
    for(int i = 1;i<=number;i++){
        
        factorial *= i;
    }cout<<"factorial of "<<number<<" is : "<<factorial<<endl;
    
}


int main() {
    
    int number;
    cin>>number; 
    
    cal_factorial(number);
    
    return 0;
    
}

