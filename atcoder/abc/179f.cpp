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

int main(){
    int n; cin >> n;
    int q; cin >> q;


    ll ans = (ll)(n-2) * (n-2);
    int h=n, w=n;
    int a[n], b[n];
    rep(i, n+1) a[i]=b[i]=n;

    rep(qi, q){
        int qn, x;
        cin >> qn >> x;

        if(qn==1){
            if(x<w){
                for(int i = x; i < w; i++){
                     b[i]=h;
                }
                w=x;
            }
            ans -= b[x] -2;

        }else{
            if(x<h){
                for(int i = x; i < h; i++){
                     a[i]=w;
                }
                h=x;
            }
            ans -= a[x] -2;
        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}