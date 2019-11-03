#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 2e18

int dp[1 << 15][1005];

int main(){
    int n, m;
    cin >> n >> m;

    rep(i, 1<<15){
        rep(j, 1005){
            if(i!=0) dp[i][j] = INF;
        }
    }

    rep(i, m){
        int a, b;
        cin >> a >> b;
        int s = 0;
        rep(j, b){
            int c;
            cin >> c;
            s += 1 << (c-1);
        }

        rep(j, 1<<n) dp[j][i+1] = dp[j][i];
        rep(j, 1<<n){
            dp[j|s][i+1] = min(dp[j|s][i+1], dp[j][i] + a);
        }

    }

    if(dp[(1<<n) -1][m] == INF){
        cout << -1 << endl;
    }else{
        cout << dp[(1<<n) -1][m] << endl;
    }
    // printf("%d\n", N);
    return 0;
}