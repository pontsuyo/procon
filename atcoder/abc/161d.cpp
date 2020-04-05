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

int dp[15][15];
int ans[15];

void dfs(int cnt, int x, int y){
    
    if(cnt > dp[x][y]){
        cnt -= dp[x][y];
    }else{
        ans[x] = y;
        for (int i = 1; i <= 9; i++){
            if(abs(y-i)<=1) dfs(cnt, x-1, i);
        }
    }
    return;
}


int main(){
    int k;
    cin >> k;

    for (int i = 0; i <= 9; i++){
        dp[1][i] = 1;
    }

    for (int i = 1; i < 11; i++){
        for (int j = 1; j <= 9; j++)
        {
            dp[i+1][j] += dp[i][j];
            if(j-1 >= 0) dp[i+1][j] += dp[i][j-1];
            if(j+1 <= 9) dp[i+1][j] += dp[i][j+1];
            if(j==1){
                dp[i+1][j] += 
            }
        }
    }

    int kk = k;
    int gi, gj;
    bool mada = true;
    for (int i = 1; i <= 11; i++){
        for (int j = 1; j <= 9; j++)
        {
            if(mada){
                if(kk > dp[i][j]){
                    kk -= dp[i][j];
                }else{
                    gi=i, gj=j;
                    mada=false; 
                }
            }
        }
    }
    printf("%d %d %d\n", kk, gi, gj);
    // for (int i = gi; i >=1 ; i--){
    //     int j = gj;
        
    // }
    dfs(kk, gi, gj);

    rep(i, 15) cout << ans[i];
    cout << endl;
    return 0;
}