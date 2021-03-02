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
#define INF (int) 2e9
#define LLINF (ll) 1e18

vector<int> g[200005];
int dp[200005];

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    rep(i, n) cin >> a[i];
    rep(i, m){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].emplace_back(y);
    }

    rep(i, n) dp[i] = INF;
    rep(i, n){
        for (auto &&ii : g[i]){
            chmin(dp[ii], min(a[i], dp[i]));
        }
    }

    int ans = -INF;
    rep(i, n){
        if(dp[i]!=INF) chmax(ans, a[i]-dp[i]);
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}