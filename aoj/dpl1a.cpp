#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, m;
    cin >> n >> m;
    int c[m];
    rep(i, m){
        cin >> c[i];
    }

    int dp[25][50005];

    rep(j, 50005){
        dp[0][j] = n;
    }

    for (int i = 1; i < m+1; i++){
        for (int j = 0; j < n; j++) {
            int num = (n - dp[i-1][j])/c[i-1];
            dp[i][j] = min(dp[i-1][j-num*c[i-1]] + num, dp[i-1][j]);
        }
    }

    rep(i, m+1){
        rep(j, n+1){
            cout << dp[i][j];
        }
        cout << endl;
    }
    // cout << dp[m][n-1] << endl;
    // printf("%d\n", N);
    return 0;
}