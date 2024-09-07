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
    ll dp[200005][2];

    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    dp[0][0] = 0;
    dp[0][1] = a[0];

    for (int i = 1; i < n; i++){
        dp[i][0] = max(dp[i-1][0], dp[i-1][1] + a[i]*2);
        dp[i][1] = max(dp[i-1][1], dp[i-1][0] + a[i]);        
    }

    cout << max(dp[n-1][0], dp[n-1][1]) << endl;
    // printf("%d\n", N);
    return 0;
}