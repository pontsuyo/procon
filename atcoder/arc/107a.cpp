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

int main(){
    ll a[3];
    rep(i, 3) cin >> a[i];
    ll aa[3];
    rep(i, 3){
        aa[i] = ((1+a[i]) * a[i]/2)%MOD;
    }
    ll ans = 1;
    rep(i, 3){
        ans *= aa[i];
        ans %= MOD;
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}