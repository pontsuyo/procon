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

int dp[1005][1005];

int main(){
    int n, m;
    cin >> n >> m;
    int a[1005];
    rep(i, n) cin >> a[i];
    int M; cin >> M;

    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= m; j++) {
            if(j-1-a[i] >= 0){
                dp[i+1][j] = (dp[i+1][j-1] + dp[i][j] - dp[i][j-1-a[i]] + M)%M;
            }else{
                dp[i+1][j] = (dp[i+1][j-1] + dp[i][j]) %M;
            }
        }
    }
    
    printf("%d\n", dp[n][m]);
    return 0;
}