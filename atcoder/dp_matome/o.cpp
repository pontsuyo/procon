#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

ll dp[1<<21][22];

int main(){
    int n;
    cin >> n;
    // int a[n][n];
    // rep(i, n) rep(j, n) cin >> a[i][j];
    dp[0][0] = 1;

    rep(j, n){
        int aa=0;
        rep(i, n){
            int a; cin >> a;
            aa += a*(1<<i);
        }

        // rep(i, 1<<n) dp[i][j+1] = dp[i][j];
        rep(i, 1<<n){
            rep(k, n){
                if((1<<k) & aa){
                    dp[i | (1<<k)][j+1] += dp[i][j];
                    dp[i | (1<<k)][j+1] %= MOD;
                }
            }
        }
    }

    cout << dp[(1<<n)-1][n] << endl;
    // printf("%d\n", N);
    return 0;
}