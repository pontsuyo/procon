#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD (int)1e9 + 7

int dp[101][4][4][4];

int main(){
    int N;
    cin >> N;

    dp[0][3][3][3] = 1;

    rep(i, N){
        rep(c1, 4){
            rep(c2, 4){
                rep(c3, 4){
                    if(dp[i][c1][c2][c3] == 0) continue;

                    rep(a, 4){
                        if(a == 2 && c1 == 1 && c2 == 0) continue;
                        if(a == 2 && c1 == 0 && c2 == 1) continue;
                        if(a == 1 && c1 == 2 && c2 == 0) continue;
                        if(a == 2 && c1 == 1 && c3 == 0) continue;
                        if(a == 2 && c2 == 1 && c3 == 0) continue;

                        dp[i+1][a][c1][c2] += dp[i][c1][c2][c3];
                        dp[i+1][a][c1][c2] %= MOD;
                    }
                }
            }
        }
    }
    int ans = 0;
    rep(c1, 4){
        rep(c2, 4){
            rep(c3, 4){
                ans += dp[N][c1][c2][c3];
                ans %= MOD;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}