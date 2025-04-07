#include <bits/stdc++.h>
using namespace std;


void sum_of_numbers_in_string(const string& str) {
    int sum = 0;
    int num = 0;
    bool is_number = false;

    for (char ch : str) {
        if (isdigit(ch)) {
            num = num * 10 + (ch - '0');
            is_number = true;
        } else {
            if (is_number) {
                sum += num;
                num = 0;
                is_number = false;
            }
        }
    }

    if (is_number) {
        sum += num;
    }

    cout << "Sum of numbers: " << sum << endl;
}

int main() {
    string str;
    getline(cin,str);
    sum_of_numbers_in_string(str);
    return 0;
}


/*
testcase :-

avinash123as321
 Sum of numbers: 444

asd 12
 Sum of numbers: 12

asd1
 Sum of numbers: 1

asd 12 21 0 asd
 Sum of numbers: 33

1221 2112
 Sum of numbers: 3333

*/