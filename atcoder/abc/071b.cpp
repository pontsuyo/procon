#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    string s;
    cin >> s;
    bool c[26] = {false};
    rep(i, s.size()){
        c[s[i]-'a'] = true;
    }
    rep(i, 26){
        if(!c[i]){
            cout << (char)('a'+i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}