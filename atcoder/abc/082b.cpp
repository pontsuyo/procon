#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    string s, t;
    cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.rbegin(), t.rend());

    rep(i, min(s.size(), t.size())){
        if(s[i] == t[i]){
            continue;
        }else if(s[i] < t[i]){
            cout << "Yes" << endl;
            return 0;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    if(s.size()<t.size()){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}