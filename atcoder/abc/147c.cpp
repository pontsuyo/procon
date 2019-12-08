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

    int a[20] = {};
    int x[20][20] = {}, y[20][20] = {};

    rep(i, n){
        cin >> a[i];
        rep(j, a[i]){
            cin >> x[i][j] >> y[i][j];
        }
    }

    int d[20] = {};

    int ans = 0;
    rep(i, 1<<n){
        int cnt = 0;
        int ii = i;
        rep(j, n){
            d[j] = ii%2;
            ii /= 2;
            cnt += d[j];
        }

        bool flag = true;
        rep(j, n){
            if(d[j]==1){
                rep(k, a[j]){
                    if(y[j][k]==1){
                        if(d[x[j][k]-1]!=1){
                            flag = false;
                            // printf("%d %d %d\n", i, j, k);
                        }
                    }else{
                        if(d[x[j][k]-1]!=0){
                            flag = false;
                            // printf("%d %d %d\n", i, j, k);
                        }
                    }
                }
            }
        }
        // printf("%d\n", i);
        if(flag){
            // printf("%d %d \n", i, cnt);
            ans = max(ans, cnt);

        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}