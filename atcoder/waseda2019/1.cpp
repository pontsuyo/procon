#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    string s;
    cin >> s;
    rep(i, s.size()-1){
        if(s[s.size()-1-i]=='A' && s[s.size()-1-i-1]=='W'){
            s[s.size()-1-i] = 'C';
            s[s.size()-1-i-1] = 'A';
        }
    }
    cout << s << endl;
    return 0;
}