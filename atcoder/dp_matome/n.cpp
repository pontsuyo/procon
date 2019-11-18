#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

ll dp[405][405];
int a[405];

int main(){
    int n;
    cin >> n;
    rep(i, n) cin >> dp[i][i];

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            ll tmp = LLINF;
            for (int k = j; k < j+i; k++) {
                tmp = min(tmp, dp[j][k] + dp[k+1][j+i]);
            }
            dp[j][j+i] = tmp;
        }
    }

    cout << dp[0][n-1] << endl;
    // printf("%d\n", N);
    return 0;
}