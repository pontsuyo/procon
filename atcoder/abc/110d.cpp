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
    int n, m;
    cin >> n >> m;
    int M = m;
    map<int, int>ma;
    for (int i = 2; i*i<=M; i++){
        while(m %i == 0){
            ma[i]++;
            m /= i;
        }
    }
    if(m!=1) ma[m]++;

    ll ans = 1;
    for (auto mi : ma){
        ans *= modcomb(mi.second+n-1, min(mi.second, n-1));
        ans %= MOD;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}