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
    int h, w, k;
    ll v;
    cin >> h >> w >> k >> v;
    ll a[h][w];
    rep(i, h) rep(j, w) cin >> a[i][j];

    ll s[h+1][w+1];
    rep(i, h+1) s[i][0] = 0;
    rep(i, w+1) s[0][i] = 0;

    rep(i, h){
        rep(j, w){
            s[i+1][j+1] = s[i][j+1] + s[i+1][j] - s[i][j] + a[i][j];
        }
    }

    // rep(i, h+1){
    //     rep(j, w+1){
    //         cout << s[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    ll ans = 0;
    int l=0, r=0;
    for (int t = 0; t < h; t++) {
        for (int b = t; b < h; b++){            
            l=0;r=0;
            while(l<=r){
                ll cnt = (r-l+1)*(b-t+1);
                ll val = s[b+1][r+1] -s[b+1][l] -s[t][r+1] +s[t][l] + cnt*k;
                // printf("%d %d %d %d %lld\n", l, r, t, b, val);
                if(val <= v){
                    chmax(ans, cnt);
                    r++;
                }else{
                    l++;
                    if(l==r) r++;
                }
                if(r>w-1) break;
            }
        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}