#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int H, W, K;
    cin >> H >> W >> K;

    int dp[W][H+1] = {};

    int f[8] ={};
    f[0] = 1;
    f[1] = 2;
    for(int i=2;i<8;i++){
        f[i] = f[i-1] + f[i-2];
    }

    rep(i, W){
        dp[i][0] = 0;
    }
    dp[0][0] = 1;

    rep(i, H+1){
        rep(j, W){
            int a, b, c;

            if(j>=1){
                if(j>=2){
                    a = f[j-2] * f[W-j-2];
                }else{
                    a = f[W-j-2];
                }
                dp[i][j] += dp[i-1][j-1] * a;
            }

            if(j>=1 && j<= W-2){
                b = f[j-1] * f[W-j-2];
            }else if(j<1){
                b = f[W-j-1];
            }else{
                b = f[j];
            }
            dp[i][j] += dp[i-1][j] * b;
            
            if(j<=6){
                if(j<=5){
                    c = f[j-2] * f[W-j-2];
                }else{
                    c = f[j];
                }
                dp[i][j] += dp[i][j+1] * c;
            }
        }
    }
    printf("%d\n", dp[W-1][H+1]);

    return 0;
}