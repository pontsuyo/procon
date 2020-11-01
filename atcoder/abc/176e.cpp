#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int nr[300005], nc[300005];
set<P> nn;

int main(){
    int h, w, m;
    cin >> h >> w >> m;

    int hh[m], ww[m];

    rep(i, m) cin >> hh[i] >> ww[i], hh[i]--, ww[i]--;

    rep(i, m){
        nr[hh[i]]++;
        nc[ww[i]]++;
        // nn[hh[i]][ww[i]]++;
        nn.insert(P(hh[i], ww[i]));
    }
    int maxr=0, maxc=0;
    rep(i, h) chmax(maxr, nr[i]);
    rep(i, w) chmax(maxc, nc[i]);

    int ans = maxr+maxc;
    vector<int> vh, vw;
    rep(i, h) if(nr[i]==maxr) vh.emplace_back(i);
    rep(i, w) if(nc[i]==maxc) vw.emplace_back(i);
    
    for (auto &&vhi : vh){
        for (auto &&vwi : vw){
            // if(nn[vhi][vwi]==0){
            if(nn.find(P(vhi, vwi))==nn.end()){
                cout << ans << endl;
                return 0;
            }
        }
    }
    ans--;
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}