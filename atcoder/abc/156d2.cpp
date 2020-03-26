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

ll modpow(ll a, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % MOD;
        a = a * a % MOD;
        n >>= 1;
    }
    return res;
}

ll modfact(ll n){
    ll ans = 1;
    for (ll i = 1; i <= n; i++){   
        ans *= i;
        ans %= MOD;
    }
    return ans;
}

ll modcomb(ll n, ll k){
    ll tmp = modfact(n);
    tmp *= modpow(modfact(n-k), MOD-2);
    tmp %= MOD;
    tmp *= modpow(modfact(k), MOD-2);
    tmp %= MOD;
    return tmp;
}

ll modcomb2(ll n, ll k){
    // ll tmp = modfact(n);
    // tmp *= modpow(modfact(n-k), MOD-2);
    // tmp %= MOD;
    // tmp *= modpow(modfact(k), MOD-2);
    // tmp %= MOD;
    ll ans = 1;
    for (ll i = n; i >= n-k+1; i--){
        ans *= i;
        ans %= MOD;
    }
    for (ll i = 1; i <= k; i++){
        ans *= modpow(i, MOD-2);
        ans %= MOD;
    }
    return ans;
}


int main(){
    int n, a, b;
    cin >> n >> a >> b;

    cout << (modpow(2, n) - modcomb2(n, a) - modcomb2(n, b)-1+(ll)MOD*MOD)%MOD << endl;

    return 0;
}