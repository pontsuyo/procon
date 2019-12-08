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

int dp[100005][3];

int main(){
    int n;
    cin >> n;
    
    ll ans = 1;
    rep(i, n){
        int a;
        cin >> a;
        int cnt = 0;
        rep(j, 3){
            if(dp[i+1][j]==a){
                cnt++;
            }
        }
        rep(j, 3){
            if(dp[i+1][j]==a){
                dp[i+1][j]++;
                break;
            }
        }
        rep(j, 3){
            dp[i+2][j] = dp[i+1][j];
        }
        ans *= cnt;
        ans %= MOD;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}