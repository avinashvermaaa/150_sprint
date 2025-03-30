#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool repeating_character(string str) {
    int n = str.size();
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[str[i]]++;  
        if (mp[str[i]] > 1) return true; 
    }
    return false;
}

void longest_substring_without_repeating_character(string str) {
    int n = str.size();
    string longest_substr = "";
    int curr_maxi = 0;

    for (int i = 0; i < n; i++) {
        string substr = "";
        unordered_set<char> charSet; 
        
        for (int j = i; j < n; j++) {
            if (charSet.count(str[j])) break; 

            substr.push_back(str[j]);
            charSet.insert(str[j]);

            int curr_size = substr.size();
            if (curr_size > curr_maxi) {
                longest_substr = substr;
                curr_maxi = curr_size;
            }
        }
    }
    cout << longest_substr <<" : "<<longest_substr.size()<< endl;
}

int main() {
    string str;
    cin >> str;
    longest_substring_without_repeating_character(str);
    return 0;
}


/*
testcase :-

abcabcbb
 abc : 3

abbbabc
 abc : 3

abcdefghijklmnopqrstuvwxyz
 abcdefghijklmnopqrstuvwxyz : 26

*/