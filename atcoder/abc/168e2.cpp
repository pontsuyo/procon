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
    map<pair<ll, ll>, ll> m;
    rep(i, n){
        ll a, b;
        cin >> a >> b;
        if(a==0 && b==0){
            m[make_pair(0, 0)]++;
        }else if(a==0){
            m[make_pair(0, 1)]++;
        }else if(b==0){
            m[make_pair(1, 0)]++;
        }else{
            ll g = abs(__gcd(a, b));
            // printf("%d %d %d \n", g, -a/g, -b/g);
            if(a<0){
                m[make_pair(-a/g, -b/g)]++;
            }else{
                m[make_pair(a/g, b/g)]++;
            }
        }
    }

    ll ans = 0;
    ll tmp = 1;
    for (auto mi : m){
        ll ai = mi.first.first;
        ll bi = mi.first.second;

        ll nai, nbi;
        if(bi<0){
            nai = -bi;
            nbi = ai;
        }else if(bi>0){
            nai = bi;
            nbi = -ai;
        }else{
            nai = 0;
            nbi = 1;
        }
        // printf("%d %d %d \n", ai, bi, mi.second);

        if(mi.second==0) continue;

        if(ai==0 && bi==0){
            ans += mi.second;
            ans %= MOD;
        }else if(m[make_pair(nai, nbi)]>0){
            tmp *= modpow(2, mi.second)+ modpow(2, m[make_pair(nai, nbi)])-1;
            tmp %= MOD;
            m[make_pair(nai, nbi)] = 0;

        }else{
            tmp *= modpow(2, mi.second);
            tmp %= MOD;
        }
    }
    ans += tmp-1;
    ans %= MOD;

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}