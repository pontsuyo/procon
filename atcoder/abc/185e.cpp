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

int main(){
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    vector<vector<int>> dp(1005, vector<int>(1005, INF));
    dp[0][0] = 0;

    rep(i, n+1) rep(j, m+1){
        if(i < n) chmin(dp[i+1][j], dp[i][j]+1);
        if(j < m) chmin(dp[i][j+1], dp[i][j]+1);
        if(i < n && j<m) chmin(dp[i+1][j+1], dp[i][j]+(a[i]!=b[j]));
    }

    cout << dp[n][m] << endl;
    // printf("%d\n", N);
    return 0;
}