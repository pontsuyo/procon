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

// (g, x, y): ax+by=g
tuple<ll, ll, ll> extgcd(ll a, ll b){
    if(b==0) return {a, 1, 0};
    ll g, x, y;
    tie(g, x, y) = extgcd(b, a%b);
    return {g, y, x-a/b*y};
}

int main(){
    int t;
    cin >> t;
    rep(ti, t){
        ll n, s, k;
        cin >> n >> s >> k;

        ll g, x, y;
        tie(g, x, y) = extgcd(k, n);
        if(s%g != 0){
            cout << -1 << endl;
            continue;
        }

        n /= g;
        s /= g;
        k /= g;
        cout << (x*(-s) + n*n)%n << endl;
    }
    return 0;
}