#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

bool is_palindrome(string str){

	int n = str.size();
	int start = 0,end = n-1;

	while(start <= end){

		if(str[start] != str[end]){
			return false;
		}
		start++;
		end--;
	}
	
	return true;
}

void count_palindromic_substring(string str){

	int n = str.size(), count = 0;
	vector<string> ans;
	for(int i = 0;i<n;i++){
		string word = "";
		for(int j = i;j<n;j++){
			word += str[j];
			if(is_palindrome(word)){
				count++;
				ans.push_back(word);
			}
		}
	}

	cout<<ans.size()<<" -> ";

	sort(begin(ans), end(ans));

	for(auto it : ans){
		cout<<it<<" ";
	}cout<<endl;

}

int main() {
    
    string str;
    cin>>str;

    count_palindromic_substring(str);
    
    return 0;
}


/*
testcase :-

aaa
 6 -> a a a aa aa aaa

abcddc
 8 -> a b c c cddc d d dd

avinash
 7 -> a a h i n s v

vriddhi
 8 -> d d dd h i i r v

verma
 5 -> a e m r v

sharma
 6 -> a a h m r s

avinash_vriddhi
 16 -> _ a a d d dd h h i i i n r s v v

*/