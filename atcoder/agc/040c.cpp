#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) 998244353
#define INF (int) 2e9
#define LLINF (ll) 2e18


ll dp[10000005][9];

int main(){
    int n;
    cin >> n;

    rep(i, 9){
        dp[2][i] = 1;
    }

    for(int i=0; i<n; i+=2){
        rep(j, 9){
            if(j!=1 && j!=3) dp[i+2][0] += dp[i][j]%MOD;
        }
        dp[i+2][1] += (dp[i][3] + dp[i][5] + dp[i][6] + dp[i][8])%MOD; 

        rep(j, 9){
            if(j!=1) dp[i+2][2] += (dp[i][j])%MOD;
        }
        dp[i+2][3] += (dp[i][1] + dp[i][2] + dp[i][7] + dp[i][8])%MOD;
            
        rep(j, 9){
            if(j!=1 && j!=3) dp[i+2][4] += dp[i][j]%MOD;
        }
        rep(j, 9){
            if(j!=3) dp[i+2][5] += dp[i][j] %MOD;
        }
        rep(j, 9){
            if(j!=3) dp[i+2][6] += dp[i][j] %MOD;
        }
        rep(j, 9){
            if(j!=1) dp[i+2][7] += dp[i][j] %MOD;
        }
        rep(j, 9){
            dp[i+2][8] += dp[i][j] %MOD;
        }

        rep(j, 9){
            dp[i+2][j] %= MOD;
        }
    }

    ll ans = 0;
    rep(i, 9){
        if(i!=1 && i!=3)ans += dp[n][i];
    }
    ans %= MOD;
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}