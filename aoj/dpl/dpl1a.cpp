#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, m;
    cin >> n >> m;
    int c[m];
    rep(i, m){
        cin >> c[i];
    }

    int dp[50005];

    rep(j, 50005){
        dp[j] = j;
    }

    for (int i = 0; i < m; i++){
        for (int j = c[i]; j < n+1; j++) {
            dp[j] = min(dp[j], dp[j-c[i]]+1);
        }
    }

    cout << dp[n] << endl;
    // printf("%d\n", N);
    return 0;
}