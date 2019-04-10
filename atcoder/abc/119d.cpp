#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a, b, q;
    cin >> a >> b >> q;
    // ll s[a];
    // ll t[b];
    vector <ll> s(a);
    vector <ll> t(b);
    rep(i, a){
        cin >> s[i];
    }
    rep(i, b){
        cin >> t[i];
    }
    // ll x[q];
    vector<ll> x(q);
    rep(i, q){
        cin >> x[i];
    }
    rep(i, q){
        ll si = lower_bound(s.begin(), s.end(), x[i]) -s.begin();
        ll ti = lower_bound(t.begin(), t.end(), x[i]) -t.begin();
        
        ll MIN = 1000000000;
        rep(k, 4){
            rep(m, 4){
                ll tmp1 = abs(x[i]-s[si+k-2]) + abs(t[ti+m-2]-s[si+k-2]);
                ll tmp2 = abs(x[i]-t[ti+k-2]) + abs(s[si+m-2]-t[ti+k-2]);
                MIN = min(MIN, tmp1);
                MIN = min(MIN, tmp2);            
            }
        }
        cout << MIN << endl;
    }
    return 0;
}