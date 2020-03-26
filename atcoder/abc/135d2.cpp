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

int dp[15][100005];

ll modpow(ll a, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % 13;
        a = a * a % 13;
        n >>= 1;
    }
    return res;
}

int main(){
    string s;
    cin >> s;

    int n = s.size();

    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        if(s[i]!='?'){
            int rem = (int)(s[i] - '0');
            rep(j, 13){
                dp[(j*10+rem)%13][i+1] += dp[j][i];
                dp[(j*10+rem)%13][i+1] %= MOD;
            }
        }else{
            rep(k, 10){
                rep(j, 13){
                    dp[(j*10+k)%13][i+1] += dp[j][i];
                    dp[(j*10+k)%13][i+1] %= MOD;
                }
            }
        }
    }
    
    cout << dp[5][n] << endl;
    // printf("%d\n", N);
    return 0;
}