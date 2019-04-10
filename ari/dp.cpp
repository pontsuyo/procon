#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int dp[MAX_N+1][MAX_W+1];

void solve1(){
    for(int i=n-1;i >=0; i--){
        for(int j=0; j<= W; j++){
            if(j <w[i]){
                dp[i][j] = dp[i+1][j];
            }else{
                dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]] + v[i]);
            }
        }
    }
    printf("%d\n", dp[0][W]);
}

// 荷物をiが小さい順に見ていくdp
void solve2(){
    for(int i=0; i < n; i++){
        for(int j=0; j <= W; j++){
            if(j < w[i]){
                dp[i+1][j] = dp[i][j];
            }else{
                dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]]+v[i]);
            }
        }
    }
}


int main(){
    solve();
    return 0;
}