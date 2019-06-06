#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int A, B, Q;
    cin >> A >> B >> Q;
    vector <ll> s;
    vector <ll> t;
    
    ll tmp;
    s.emplace_back((ll)-1e18);
    t.emplace_back((ll)-1e18);

    rep(i, A){
        cin >> tmp;
        s.emplace_back(tmp);
    }
    rep(i, B){
        cin >> tmp;
        t.emplace_back(tmp);
    }
    s.emplace_back((ll)1e18);
    t.emplace_back((ll)1e18);

    rep(i, Q){
        ll x;
        cin >> x;
        auto si = lower_bound(s.begin(), s.end(), x);
        auto ti = lower_bound(t.begin(), t.end(), x);

        auto sid = si - s.begin();
        auto tid = ti - t.begin();
        
        ll MIN = (ll)1e18;

        ll ttt;
        rep(i, 2){
            rep(j, 2){
                ttt = abs(x-s[sid-i]) + abs(s[sid-i] - t[tid-j]);
                MIN = min(MIN, ttt);
                // printf("%lld\n", ttt);
            }
        }

        rep(i, 2){
            rep(j, 2){
                ttt = abs(x-t[tid-i])+ abs(t[tid-i] - s[sid-j]);
                MIN = min(MIN, ttt);
                // printf("%lld\n", ttt);
            }
        }
        printf("%lld\n", MIN);
    }
    return 0;
}