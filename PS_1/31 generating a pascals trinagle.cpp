#include<iostream>
#include<vector>
using namespace std;

void generate_pascals_triangle(int n){

  vector<vector<int>> arr(n, vector<int>(n)) ;
  int k = 1;
  for(int i = 0;i<n;i++){
    for(int j = 0; j<= i; j++){
      
      if(j== 0 || j == i) arr[i][j] = 1;
      else{
        arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
      }
      cout<<arr[i][j];
    }cout<<endl;
  }

}

int main(){
  int n;
  cin>>n;
  generate_pascals_triangle(n);
  return 0;
}

/*
testcases :-

5
 1
 11
 121
 1331
 14641

3
 1
 11
 121

4
 1
 11
 121
 1331
*/
