#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (2019)
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

int d[200005];

int main(){
    string s;
    cin >> s;
    int n = s.size();

    map<int, int> m;

    m[0]++;
    d[n-1] = (int)(s[n-1]-'0');
    m[d[n-1]]++;
    for (int i = n-2; i >=0; i--){
        d[i] = (d[i+1] + modpow(10, n-i-1) * (int)(s[i]-'0'))%MOD;
        m[d[i]]++;
    }

    ll ans = 0;
    for (auto mm : m){
        ans += (ll) mm.second * (mm.second-1)/2;
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}