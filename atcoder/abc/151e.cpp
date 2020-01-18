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

int main(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    rep(i, n){
        cin >> a[i];
    }
    
    sort(a, a+n);


    ll fac[n];
    fac[k-1] = (ll)1;
    for (ll i = k; i < n; i++) {
        fac[i] = fac[i-1] * i;
        fac[i] %= MOD;
        fac[i] *= modpow((i-k+1), MOD-2);
        fac[i] %= MOD;
    }

    ll ans = 0;
    for (ll i = k-1; i < n; i++){
        ans += fac[i] * a[i];
        ans %= MOD;
    }
    for (ll i = k-1; i < n; i++){
        ans -= fac[i] * a[n-i-1];
        ans %= MOD;
    }

    cout << ans%MOD << endl;
    // printf("%d\n", N);
    return 0;
}