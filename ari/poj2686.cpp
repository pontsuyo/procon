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

#define MAX_N 10
#define MAX_M 30

// ビットDP

int n, m, a, b;
int t[MAX_N];
int d[MAX_M][MAX_M];

double dp[1 << MAX_M][MAX_M];

void solve(){
    for (int i = 0; i < 1<<m; i++)
    {
        fill(dp[i], dp[i] +m, INF);
    }
    dp[(1<<n)-1][a-1] = 0;

    double res = INF;
    for (int S = (1<<n)-1 ; S >= 0; S--) {
        chmin(res, dp[S][b-1]);
        for (int v = 0; v < m; v++) {
            for (int i = 0; i < n; i++) {
                if(S >> i & 1){
                    for (int u = 0; u < m; u++) {
                        if(d[v][u] >= 0) {
                            chmin(dp[S & ~(1 << i)][u], dp[S][v] + (double) d[v][u] / t[i]);
                        }
                    }       
                }
            }   
        }
    }
    if (res==INF){
        printf("Impossible\n");
    }else{
        printf("%.3f\n", res);
    } 
}


int main(){
    cin >> n >> m >> a >> b;
    rep(i, n) fill(d[i], d[i]+n, -1);
    rep(i, n){
        cin >> t[i];
    }
    rep(i, m){
        int ss, tt, cc;
        cin >> ss >> tt >> cc;
        ss--;
        tt--;
        d[ss][tt] = cc;
        d[tt][ss] = cc;
    }

    solve();
    return 0;
}