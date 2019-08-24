#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n, W;
    cin >> n >> W;
    vector<int> v(n), w(n);
    rep(i, n){
        cin >> v[i] >> w[i];
    }

    int dp[105][10005] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < W+1; j++) {
            if (i==0) {
                if (j >= w[i]){
                    dp[i][j] = v[i];
                }else{
                    dp[i][j] = 0;
                }
            }else{
                if (j >= w[i]){
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    }
    cout << dp[n-1][W] << endl;
    // printf("%d\n", N);
    return 0;
}