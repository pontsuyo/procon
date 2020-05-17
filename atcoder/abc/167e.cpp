#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (998244353)
#define INF (int) 1e9
#define LLINF (ll) 1e18

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
    ll n, m, k;
    cin >> n >> m >> k;

    ll nck = 1;
    ll mm = (modpow(m-1, n-1) * m) %MOD;

    ll ans = 0;
    for (int ki = 0; ki <= k; ki++){
        ans += nck * mm;
        ans %= MOD;

        nck *= n-1-ki;
        nck %= MOD;
        nck *= modpow(ki+1, MOD-2);
        nck %= MOD;

        mm *= modpow(m-1, MOD-2);
        mm %= MOD;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}