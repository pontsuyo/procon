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

int a[15][15];

int main(){
    int n;
    cin >> n;

    rep(i, n){
        for (int j = i+1; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int ans = -INF;
    rep(iii, (int) pow(3, n)){
        int g[n];
        int ii = iii;
        rep(j, n){
            g[j] = ii % 3;
            ii /= 3;
        }

        int tmp = 0;
        rep(i, n){
            for (int j = i+1; j < n; j++) {
                if(g[i]==g[j]) tmp += a[i][j];
            }
        }

        chmax(ans, tmp);
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}