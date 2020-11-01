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

int n;
int d[18][18];
int dp[1<<18][18];

int rec(int s, int v){
    if(dp[s][v]!=INF) return dp[s][v];
    if(s==(1<<n)-1 && v==0){
        dp[s][v]=0;
        return 0;
    }

    int res = INF;
    for (int u = 0; u < n; u++){
        if(s>>u & 1)continue;
        res = min(res, rec(s|1<<u, u) + d[v][u]);
    }
    
    dp[s][v] = res;
    return res;
}


int main(){
    cin >> n;

    int x[n], y[n], z[n];

    rep(i, n) cin >> x[i] >> y[i] >> z[i];
    rep(i, 1<<n) rep(j, n) dp[i][j] = INF;
    dp[(1<<n)-1][0] = 0;

    rep(i, n) rep(j, n) d[i][j] = INF;
    rep(i, n) rep(j, n) if(i!=j) {
        d[i][j] = abs(x[i]-x[j]) + abs(y[i]-y[j]) + max(0, z[j]-z[i]);
        d[j][i] = abs(x[i]-x[j]) + abs(y[i]-y[j]) + max(0, z[i]-z[j]);
    }

    cout << rec(0, 0) << endl;

    // printf("%d\n", N);
    return 0;
}