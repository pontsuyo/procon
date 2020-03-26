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


ll dp[1005][1005];

int main(){
    int n, m;
    cin >> n >> m;
    int M; cin >> M;

    dp[0][0] = 1;
    for (int i = 1; i <=  m; i++){
        for (int j = 0; j <= n; j++){
            if(j-i >= 0){
                dp[i][j] = (dp[i-1][j] + dp[i][j-i]) % M;
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    printf("%d\n", dp[m][n]);

    return 0;
}