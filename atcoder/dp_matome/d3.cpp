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

ll dp[100005];

int main(){
    int n, w;
    cin >> n >> w;

    rep(j, n){
        int wi, vi;
        cin >> wi >> vi;
        for (int i = w; i >= wi; i--){
            dp[i] = max(dp[i], dp[i-wi] + vi);
        }

        // repr(i, 0,w){
        //     cout << dp[i] << " ";
        // }
        // cout << endl;
    }

    cout << dp[w] << endl;
    // printf("%d\n", N);
    return 0;
}