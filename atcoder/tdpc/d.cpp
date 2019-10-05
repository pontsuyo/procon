#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    ll d;
    cin >> n;
    cin >> d;

    int dp[105][65][50][50] = {};

    dp[1][0][0][0] = 1;
    dp[1][1][0][0] = 1;
    dp[1][0][1][0] = 1;
    dp[1][2][0][0] = 1;
    dp[1][0][0][1] = 1;
    dp[1][1][1][0] = 1;

    int fact[3] = {2, 3, 5}, cnt[3] ={};
    rep(i, 3){
        while(d%fact[i]==0){
            d /= fact[i];
            cnt[i]++;
        }
    }

    for (int i = 1; i < n; i++){
        rep(j, cnt[0]+1){
            rep(k, cnt[1]+1){
                rep(l, cnt[2]+1){
                    dp[i+1][j][k][l] += dp[i][j][k][l];
                    dp[i+1][j+1][k][l] += dp[i][j][k][l];
                    dp[i+1][j][k+1][l] += dp[i][j][k][l];
                    dp[i+1][j+2][k][l] += dp[i][j][k][l];
                    dp[i+1][j][k][l+1] += dp[i][j][k][l];
                    dp[i+1][j+1][k+1][l] += dp[i][j][k][l];
                }
            }
        }
    }

    ll ans = 0;
    for (int j = cnt[0]; j < 65; j++) {
        for (int k = cnt[1]; k < 50; k++) {
            for (int l = cnt[2]; l < 50; l++) {
                ans += dp[n][j][k][l];
            }
        }
    }
    // cout << n << endl;
    printf("%llf\n", ans/pow(6, n));
    return 0;
}