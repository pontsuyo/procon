#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
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
    int n;
    cin >> n;
    ll a[n];
    rep(i, n) cin >>a[i];

    ll tmp = 0;
    ll sqsum = 0;
    rep(i, n) {
        tmp += a[i];
        tmp %= MOD;

        sqsum += a[i]*a[i];
        sqsum %= MOD;
    }
    
    ll sqtm = tmp*tmp;
    sqtm %= MOD;

    ll t = (sqtm + MOD - sqsum)%MOD;

    t *= modpow(2, MOD-2);
    t %= MOD;

    cout << t << endl;
    // printf("%d\n", N);
    return 0;
}