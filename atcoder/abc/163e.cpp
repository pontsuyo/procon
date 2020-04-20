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

ll dp[2005][2005];

int main(){
    int n;
    cin >> n;
    P p[n];
    rep(i, n){
        int a;
        cin >> a;
        p[i] = P(a, i);
    }

    sort(p, p+n, greater<>());

    dp[0][0] = 0;

    rep(xi, n){
        rep(i, xi+1){
            dp[xi-i+1][i] = max(dp[xi-i+1][i], dp[xi-i][i] + (ll) p[xi].first * abs(p[xi].second - (xi-i)));
            dp[xi-i][i+1] = max(dp[xi-i][i+1], dp[xi-i][i] + (ll) p[xi].first * abs(p[xi].second - (n-i-1)));
        }
    }
    
    ll ans = 0;
    rep(i, n+1) chmax(ans, dp[n-i][i]);

    cout << ans << endl;
    return 0;
}