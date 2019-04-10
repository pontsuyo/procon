#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N 100
#define MAX_W 10000

int n, W;
int w[MAX_N], v[MAX_N];
int dp[MAX_N+1][MAX_W+1];

// 三重ループで．
void solve1(){
    for(int i=0;i<n;i++){
        for(int j=0;j<=W;j++){
            for(int k=0; k*w[i] <= j; k++){
                dp[i+1][j] = max(dp[i+1][j], dp[i][j-k*w[i]]+k*v[i]);
            }
        }
    }
    printf("%d\n", dp[n][W]);
}

// 三重ループは外せる．
void solve2(){
    for(int i=0;i<n;i++){
        for(int j=0;j<=W;j++){
            if(j<w[i]){
                dp[i+1][j] = dp[i][j];
            }else{
                dp[i+1][j] = max(dp[i][j], dp[i+1][j-w[i]]+v[i]);

            }
        }
    }
    printf("%d\n", dp[n][W]);
}

int main(){
    cin >> n;
    rep(i, n){
        cin >> w[i] >> v[i];
    }
    cin >> W;
    solve2();
    return 0;
}