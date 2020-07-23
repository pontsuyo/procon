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

int dp[100005];
int hardle[100005];

int main(){
    int n, l;
    cin >> n >> l;
    int x[n];
    rep(i, n) {
        cin >> x[i];
    }
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    rep(i, n) {
        hardle[x[i]]=t3;
    }

    for (int i = 1; i <= l-1; i++){
        int tmp = dp[i-1] + t1;
        if(i>=2) chmin(tmp, dp[i-2] + t1 + t2);
        if(i>=4) chmin(tmp, dp[i-4] + t1 + t2*3);
        tmp += hardle[i];

        dp[i] = tmp; 
    }
    
    int ans = INF;
    chmin(ans, dp[l-1]+t1);
    chmin(ans, dp[l-1]+t1/2+t2/2);
    chmin(ans, dp[l-2]+t1+t2);
    chmin(ans, dp[l-2]+t1/2+t2/2*3);
    chmin(ans, dp[l-3]+t1/2+t2/2*5);
    chmin(ans, dp[l-4]+t1+t2*3);

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}