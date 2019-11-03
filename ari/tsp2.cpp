#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e5
#define LLINF (ll) 2e18

#define MAX_N 20

int n;
int d[MAX_N][MAX_N];

int dp[1 << MAX_N][MAX_N];

// すでに訪れた頂点がS, 現在位置がv
int rec(int S, int v) {
    if(dp[S][v] >= 0) {
        return dp[S][v];
    }

    if ( S == (1 << n) -1 && v == 0) {
        //全て訪れて戻ってきた
        return dp[S][v] = 0;
    }


    int res = INF;
    for (int u = 0; u < n; u++) {
        if (!(S >> u & 1)) {
            // 次にuに移動する
            res = min(res, rec(S | 1<<u, u) + d[v][u]);
        }
    }

    return dp[S][v] = res;
}

void solve(){
    for (int S = 0; S < 1<<n; S++) {
        fill(dp[S], dp[S]+n, INF);
    }
    dp[(1<<n)-1][0] = 0;
    
    for (int S = (1<<n)-2; S >= 0; S--) {
        for (int v = 0; v < n; v++) {
            for (int u = 0; u < n; u++) {
                if (!(S>>u & 1)) {
                    chmin(dp[S][v], dp[S|1<<u][u] + d[v][u]);
                }
            }
        }
    }
    printf("%d\n", dp[0][0]);
}

int main(){
    cin >> n;
    int q; cin >> q;

    memset(d, INF, sizeof(d));
    rep(i, q){
        int s, t, c;
        cin >> s >> t >> c;
        d[s][t] = c;
    }
    solve();
    return 0;
}