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

ll dp[1000005][4];

int main(){
    int n;
    cin >> n;

    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 8;
    dp[1][3] = 0;
    
    for (int i = 2; i <= n; i++){
        dp[i][0] = (dp[i-1][0] * 9 + dp[i-1][2]) %MOD;
        dp[i][1] = (dp[i-1][1] * 9 + dp[i-1][2])%MOD;
        dp[i][2] = dp[i-1][2] * 8 % MOD;
        dp[i][3] = (dp[i-1][3] * 10 + dp[i-1][0] + dp[i-1][1])%MOD;
    }

    cout << dp[n][3] << endl;
    
    // printf("%d\n", N);
    return 0;
}