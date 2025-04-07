#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

unordered_map<char, int> bracket_map = {
    {'(', -1}, {')', 1},
    {'[', -2}, {']', 2},
    {'{', -3}, {'}', 3}
};

void check_balanced_bracket(string str) {
    stack<char> st;
    for (char ch : str) {
        if (bracket_map[ch] < 0) {
            st.push(ch);
        } 
        else {
            if (st.empty()) {
                cout << "Not Balanced" << endl;
                return;
            }

            char top = st.top();
	        	if (bracket_map[top] + bracket_map[ch] == 0) {
		            st.pop(); 
		        } 
		        else{
		            cout << "Not Balanced" << endl;
		            return;
		        }
        }
    }
    if (st.empty()) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
    }
}

int main() {
    string str;
    cin >> str;
    check_balanced_bracket(str);
    return 0;
}

/*
testcase :-

123321
 Not Balanced

{([])}
 Balanced

((((((()))))))
 Balanced

({[(}]})
 Not Balanced

({[(]})
 Not Balanced

*/
