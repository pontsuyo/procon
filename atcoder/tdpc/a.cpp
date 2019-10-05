#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int p[n];
    rep(i, n){
        cin >> p[i];
    }

    bool dp[105][10005];

    rep(i, 105){
        rep(j, 10005){
            dp[i][j] = false;
        }
    }

    dp[0][0] = true;
    dp[0][p[0]] = true;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 10005; j++) {
            if(j-p[i]>=0) dp[i][j] |= dp[i-1][j-p[i]];
            dp[i][j] |= dp[i-1][j];
        }
    }
    
    int cnt = 0;
    rep(i, 10005){
        if(dp[n-1][i]) cnt++;
    }    

    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}