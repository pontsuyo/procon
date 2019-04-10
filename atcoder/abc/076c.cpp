#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    string s, t;
    cin >> s >> t;

    string MIN = "";
    rep(i, s.size()){
        MIN += 'z';
    }

    bool match=true;
    bool exist = false;
    rep(i, s.size()-t.size()+1){
        string si = s.substr(i, t.size());
        // cout << si << endl;
        match = true;
        string s_ = s;
        rep(j, t.size()){
            if(si[j]!='?' && si[j]!=t[j]){
                match = false;
                break;
            }
            s_[i+j] = t[j];
        }
        // cout << i  << match << endl;
        if(match){
            rep(j, s_.size()){
                if(s_[j]=='?') s_[j] = 'a';
            }
            // if(MIN > s_) MIN = s_;
            MIN = min(MIN, s_);
            exist = true;
        }
    }
    if(exist) cout << MIN << endl;
    else cout << "UNRESTORABLE" << endl;
    return 0;
}