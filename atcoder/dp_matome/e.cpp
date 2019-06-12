#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N, W;
    cin >> N >> W;
    ll w[N], v[N];

    int V=0;
    rep(i, N){
        cin >> w[i] >> v[i];
        V += v[i];
    }

    int INF = 1000000005;
    V += 5;

    ll dp[N+1][V] = {};

    int sumV = 0;
    rep(i, N){
        sumV += v[i];
        rep(j, V){
            if(i==0){
                dp[i][j] = INF;
            }

            if(j-v[i]>=0){
                dp[i+1][j] = min(dp[i][j], dp[i][j-v[i]] + w[i]);
            }else{
                dp[i+1][j] = min(dp[i][j], w[i]);
            }
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }
    int MAX = 0;
    for(int i=V-1;i>=0;i--){
        if(dp[N][i]<=W){
            MAX = i;
            // printf("%d\n", dp[N][i]);
            break;
        }
    }
    printf("%d\n", MAX+1);
    return 0;
}