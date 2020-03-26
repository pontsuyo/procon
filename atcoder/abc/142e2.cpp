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

int dp[1<<13][1005];

int main(){
    rep(i, 1<<13)rep(j, 1005) if(i!=0)dp[i][j] = INF;
    
    int n, m;
    cin >> n >> m;

    rep(i, m){
        int a, b;
        cin >> a >> b;
        int c = 0;
        rep(_, b){
            int tc; cin >> tc;
            c += 1<<(tc-1);
        }

        rep(j, 1<<n) dp[j][i+1] = dp[j][i];
        rep(j, 1<<n){
            dp[j | c][i+1] = min(dp[j | c][i+1], dp[j][i] + a);
        }
    }

    int ans = dp[(1<<n) -1][m];
    if(ans!=INF){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }
    
    // printf("%d\n", N);
    return 0;
}