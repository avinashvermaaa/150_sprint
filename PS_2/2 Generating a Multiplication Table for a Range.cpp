#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void generatee_table(int start, int end){

	for(int i = start; i<= end; i++){
		for(int j = 1; j<= end; j++){
			cout<<i<<" X "<<j<<" = "<<(i*j)<<endl;
		}cout<<endl;
	}
}



int main() {

	int start,end;

	cin>>start>>end;

	generatee_table(start,end);
    
    return 0;
}


/*
testcase :-


2 4

2 X 1 = 2
2 X 2 = 4
2 X 3 = 6
2 X 4 = 8

3 X 1 = 3
3 X 2 = 6
3 X 3 = 9
3 X 4 = 12

4 X 1 = 4
4 X 2 = 8
4 X 3 = 12
4 X 4 = 16


3 6

3 X 1 = 3
3 X 2 = 6
3 X 3 = 9
3 X 4 = 12
3 X 5 = 15
3 X 6 = 18

4 X 1 = 4
4 X 2 = 8
4 X 3 = 12
4 X 4 = 16
4 X 5 = 20
4 X 6 = 24

5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30

6 X 1 = 6
6 X 2 = 12
6 X 3 = 18
6 X 4 = 24
6 X 5 = 30
6 X 6 = 36

*/