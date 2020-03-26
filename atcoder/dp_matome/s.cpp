#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

ll dp[10005][100][2];

int main(){
    string k;
    int d;
    cin >> k >> d;

    dp[0][0][0] = 1;

    rep(i, k.size()){
        rep(j, d)rep(m, 2){
            rep(num, 10){
                int ni=i+1, nj = (j+num)%d, nm = m;
                int ki = k[i]-'0';
                if(m==0){
                    if(ki < num) continue;
                    if(ki > num) nm = 1;
                }

                dp[ni][nj][nm] += dp[i][j][m];
                dp[ni][nj][nm] %= MOD;
            }
        }
    }


    cout << (dp[k.size()][0][0] + dp[k.size()][0][1] -1 + MOD )%MOD << endl;
    // printf("%d\n", N);
    return 0;
}