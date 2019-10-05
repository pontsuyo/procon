#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }

    ll dp[105][100005] = {};

    rep(i, a[0]+1){
        dp[0][i] = 1;
    }
    rep(i, n){
        dp[i][0] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < k+1; j++) {
            if(j <= a[i]){
                rep(l, j+1){
                    dp[i][j] += dp[i-1][j-l];
                    dp[i][j] %= MOD;
                }
            }else{
                dp[i][j] = dp[i][j-1] + dp[i-1][j] - dp[i-1][j-a[i]-1];
                dp[i][j] %= MOD;
            }
        }
    }
    cout << dp[n-1][k] << endl;
    // printf("%d\n", N);
    return 0;
}