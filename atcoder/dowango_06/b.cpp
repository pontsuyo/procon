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

ll dp[2005][2005];

int main(){
    int n;
    cin >> n;

    ll x[n];
    rep(i, n){
        cin >> x[i];
    }

    dp[3][1] = 2;
    dp[3][2] = 3;

    for (int i = 4; i <= n; i++) {
        for (int j = 1; j <= i-1; j++) {
            int u = dp[i-1][1];
            if(j==1){
                dp[i][j] = (ll)u * (i-1);
                dp[i][j] %= MOD;
            }else{
                dp[i][j] = (ll)u + dp[i-1][j-1];
                dp[i][j] += dp[i-1][j-1] * (j-1);
                dp[i][j] %= MOD;
                dp[i][j] += dp[i-1][j] * (i-j-1);
                dp[i][j] %= MOD;
            }
        }
    }

    // rep(i, 10){
    //     rep(j, 10){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    ll ans = 0;
    rep(i, n-1){
        ans += ((x[i+1]-x[i]) % MOD) * dp[n][i+1];
        ans %= MOD;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}