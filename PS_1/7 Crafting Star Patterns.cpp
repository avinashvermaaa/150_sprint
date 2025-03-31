#include<bits/stdc++.h> 
using namespace std;

int main() {
    int rows ;
    cin>>rows;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) cout << " ";  // Print spaces
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";  // Print stars
        cout << endl;
    }
    return 0;
}


/*
3
  *
 ***
*****
*/