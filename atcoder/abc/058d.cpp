#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    ll n, m;
    cin >> n >> m;

    ll x[n], y[m];
    rep(i, n) cin >> x[i];
    rep(i, m) cin >> y[i];

    ll sx = 0, sy = 0;
    repr(i, 1, n-1){
        sx += (ll) i * (n-i) * (x[i]-x[i-1]);
        sx %= MOD;
    }

    repr(i, 1, m-1){
        sy += (ll) i * (m-i) * (y[i]-y[i-1]);
        sy %= MOD;
    }

    cout << (sx * sy)%MOD << endl;
    // printf("%d\n", N);
    return 0;
}