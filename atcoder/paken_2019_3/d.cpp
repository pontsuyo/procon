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

int dp[3][1000];

int main(){
    int n;
    cin >> n;
    string s[5];
    rep(i, 5){
        cin >> s[i];
    }
    int a[3][n];

    rep(i, 3)rep(j, n) a[i][j] = 0;


    rep(i, n){
        rep(j, 5){
            char c = s[j][i];
            if(c=='R'){
                a[0][i]++;
            }else if(c=='B'){
                a[1][i]++;
            }else if(c=='W'){
                a[2][i]++;
            }
        }
    }

    dp[0][0] = 5-a[0][0];
    dp[1][0] = 5-a[1][0];
    dp[2][0] = 5-a[2][0];

    for (int i = 1; i < n; i++) {
        dp[0][i] = min(dp[1][i-1], dp[2][i-1]) + (5-a[0][i]);
        dp[1][i] = min(dp[0][i-1], dp[2][i-1]) + (5-a[1][i]);
        dp[2][i] = min(dp[0][i-1], dp[1][i-1]) + (5-a[2][i]);
    }

    int ans = INF;
    rep(i, 3){
        chmin(ans, dp[i][n-1]);
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}