#include<bits/stdc++.h> 
using namespace std;

void sum_digits(int number){
    
    cout<<"sum of digits of "<<number<<" is : ";
    int sum = 0;
    while(number){
        int unit_digit = number % 10;
        
        sum += unit_digit;
        number /= 10;
    }
    
    cout<<sum<<endl;
    
}


int main() {
    
    int number;
    cin>>number; 
    
    sum_digits(number);
    
    return 0;
    
}

