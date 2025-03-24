#include<bits/stdc++.h> 
using namespace std;

int main() {
    string str;
    getline(cin,str);
    
    int n = str.size();
    int vowel = 0,consonant = 0;
    
    for(int i = 0;i<n;i++){
        if(str[i] =='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u'){
            vowel++;
        }
        else if(str[i] == ' ') continue;
        else consonant++;
    }
    
    cout<<n<<" "<<vowel<<" "<<consonant<<endl;
    
    
    
    return 0;
    
}

