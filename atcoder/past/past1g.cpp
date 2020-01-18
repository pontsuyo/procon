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

int main(){
    int n;
    cin >> n;
    int a[n][n];

    rep(i, n-1){
        for (int j = i+1; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;
    rep(i, (int) pow(3, n)){
        int g[n];
        int ii = i;
        rep(j, n){
            g[j] = ii%3;
            ii /=3;
        }

        vector<int> vs[3];
        rep(j, n){
            vs[g[j]].emplace_back(j);
        }

        int score = 0;
        rep(j, 3){
            rep(k, vs[j].size()){
                rep(l, vs[j].size()){
                    if(k<l){
                        score += a[vs[j][k]][vs[j][l]];
                    }
                }
            }
        }
        
        ans = max(ans, score);
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}