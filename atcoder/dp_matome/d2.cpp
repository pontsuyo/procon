#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N, W;
    cin >> N >> W;
    int w[N], v[N];
    rep(i ,N){
        cin >> w[i] >> v[i];
    }

    ll dp[N][W+1];

    rep(j, W+1){
        if(j>=w[0]){
            dp[0][j] = (ll) v[0];
        }else{
            dp[0][j] = (ll) 0;
        }
    }
    // rep(j, W+1){
    //     printf("%d\n", dp[0][j]);
    // }

    for(int i=1;i<N;i++){
        rep(j, W+1){
            if(j-w[i]>=0){
                dp[i][j] = max(dp[i-1][j-w[i]] + v[i], dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    // rep(i, N){
    //     rep(j, W+1){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    printf("%lld\n", dp[N-1][W]);
    return 0;
}