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

int dp[100005];

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }

    dp[1] = abs(a[1]-a[0]);
    dp[2] = abs(a[2]-a[0]);
    
    for (int i = 3; i <= n-1; i++)
    {
        dp[i] = min(dp[i-1] + abs(a[i]-a[i-1]), dp[i-2] + abs(a[i]-a[i-2]));
    }
    
    cout << dp[n-1] << endl;
    // printf("%d\n", N);
    return 0;
}