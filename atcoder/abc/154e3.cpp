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

int dp[105][5][2];

int main(){
    string s;
    cin >> s;
    int K;
    cin >> K;
    int n = s.size();

    dp[0][0][0] = 1;

    rep(i, n){
        int nd = s[i]-'0';
        rep(j, 4) rep(k, 2){
            rep(d, 10){
                int ni=i+1, nj=j, nk=k;
                if(d!=0) nj++;
                if(nj>K) continue;
                if(k==0){
                    if(d > nd) continue;
                    if(d < nd) nk = 1;
                }
                dp[ni][nj][nk] += dp[i][j][k];
            }
        }
    }

    cout << dp[n][K][0] + dp[n][K][1] << endl;
    return 0;
}