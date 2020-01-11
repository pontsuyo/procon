#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

ll de[100005];
ll d0[100005];

ll modpow(ll a, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % MOD;
        a = a * a % MOD;
        n >>= 1;
    }
    return res;
}

int main(){
    ll n;
    cin >> n;

    ll x[n];
    rep(i, n){
        cin >> x[i];
    }

    d0[2] = 1;
    de[2] = 1;
    d0[3] = 2;
    de[3] = 3;
    
    for (ll i = 4; i <= n; i++) {
        d0[i] = d0[i-1] * (i-1);
        d0[i] %= MOD;
        de[i] = d0[i-1] + de[i-1] * (i-1);
        de[i] %= MOD;
    }
    // rep(i, 10){
    //     cout << d0[i] << " " << de[i] << endl;
    // }


    ll ans = 0;
    rep(i, n-1){
        ll tmp = d0[n];
        tmp *= de[i+2];
        tmp %= MOD;
        tmp *= modpow(d0[i+2], MOD-2);
        tmp %= MOD;
        tmp *= (x[i+1]-x[i]);
        tmp %= MOD;
        ans += tmp;
        ans %= MOD;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}